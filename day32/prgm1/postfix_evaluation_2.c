#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 20

// Stack structure
typedef struct {
    int data[MAX];
    int top;
} Stack;

// Function to initialize the stack
void init(Stack* s) {
    s->top = -1;
}

// Function to check if the stack is empty
int isEmpty(Stack* s) {
    return s->top == -1;
}

// Function to push an element onto the stack
void push(Stack* s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->data[++(s->top)] = value;
}

// Function to pop an element from the stack
int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->data[(s->top)--];
}

// Function to evaluate a postfix expression
int evaluatePostfix(char* expression) {
    Stack s;
    init(&s);

    for (int i = 0; expression[i] != '\0'; i++) {
        // If the character is a digit, push it onto the stack
        if (isdigit(expression[i])) {
            push(&s, expression[i] - '0');
        }
        // If the character is an operator, pop two elements from the stack,
        // perform the operation, and push the result back onto the stack
        else {
            int operand2 = pop(&s);
            int operand1 = pop(&s);
            switch (expression[i]) {
                case '+':
                    push(&s, operand1 + operand2);
                    break;
                case '-':
                    push(&s, operand1 - operand2);
                    break;
                case '*':
                    push(&s, operand1 * operand2);
                    break;
                case '/':
                    push(&s, operand1 / operand2);
                    break;
                default:
                    printf("Invalid operator encountered: %c\n", expression[i]);
                    exit(1);
            }
        }
    }

    // The final result should be the only element left in the stack
    return pop(&s);
}

int main() {
    // char expression[MAX];
    // printf("Enter a postfix expression: ");
    // scanf("%s", expression);
    char expression[20]="123*+5-\0";
    int result = evaluatePostfix(expression);
    printf("Result of postfix evaluation: %d\n", result);

    return 0;
}

