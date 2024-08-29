#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
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

void push(struct Node** top, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("%d pushed to stack\n", data);
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

int peek(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty\n");
        exit(1);
    }
    return top->data;
}

void display(struct Node** top)
{
    if (isEmpty(*top)) {
        printf("Stack underflow!\n\n");
        	return;
		//exit(1);
    }
	struct Node *temp=*top;
		printf("The Stack: \n\n");
	while(temp!=NULL) {
		printf("------\n");
		printf("| %d |\t\n",temp->data);
		printf("------\n");
		temp=temp->next;
	}
	printf("  |\n  V \n");
	printf(" NULL\n\n");
}
int main() {
	printf("-----STACK IMPLEMENTATION USING LINKED LIST-----\n\n");
    struct Node* stack = NULL;
	display(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
	display(&stack);
    printf("%d popped from stack\n", pop(&stack));
	display(&stack);
    printf("Top element is %d\n", peek(stack));
    return 0;
}
