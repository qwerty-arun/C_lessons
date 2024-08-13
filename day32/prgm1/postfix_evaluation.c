#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(struct Node** top, char data) {
    struct Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("%c pushed to stack\n", data);
}

int isEmpty(struct Node* top) {
    return !top;
}

int pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack underflow\n");
        exit(1);
    }
    struct Node* temp = *top;
    *top = (*top)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

void postfix_evaluation(struct Node* top,char exp[])
{
   int len=strlen(exp); 
	    int result;
    for(int i=0;i<len;i++)
    {
	if(exp[i]=='1' || exp[i]=='2' || exp[i]=='3' || exp[i]=='4' || exp[i]=='5' || exp[i]=='6' || exp[i]=='7' || exp[i]=='8' || exp[i]=='9' || exp[i]=='0')
	{
	    push(&top,exp[i]);
	}
	else{
	    int second_operand=pop(&top);
	    int first_operand=pop(&top);
	if(exp[i]=='+')
	    result=first_operand+second_operand;
	else if(exp[i]=='-')
		result=first_operand-second_operand;
	else if(exp[i]=='*')
		result=first_operand*second_operand;
	else
	result=first_operand/second_operand;
	    push(&top,result);
	}
    }
    printf("Final Result: %d\n",result);
}
int main() {
    char exp[10]="123*+5-\0";
    struct Node* top= NULL;
    postfix_evaluation(top,exp);
    return 0;
}
