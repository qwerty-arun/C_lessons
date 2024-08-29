#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node* next;
};

struct Node* createNode(char data) {
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
    // printf("%c pushed to stack\n", data);
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

int isPalindrome(char A[]){
    struct Node* S;
    int i = 0;
    while(A[i]){
        push(&S, A[i]);
        i++;
    }
    i=0;
    while(A[i]){
        if(A[i] != pop(&S)){
            return 0; // Not a palindrome
        }
        i++;
    }
    return isEmpty(S);
}

int main() {
    char exp[10]="ababXbaba";
    struct Node* top= NULL;
	int result=isPalindrome(exp);
	if(!result)
	{
		printf("Not a Palindrome String!\n");
	}
	else
	{
		printf("Palindrome String!\n");
	}
    return 0;
}
