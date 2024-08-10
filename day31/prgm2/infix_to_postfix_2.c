#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

// Stack structure
struct Stack {
    int top;
    char items[MAX];
};

// Function to initialize the stack
void initStack(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, char item) {
    if (stack->top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack->items[++stack->top] = item;
}

// Function to pop an element from the stack
char pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return '\0';
    }
    return stack->items[stack->top--];
}

// Function to get the top element of the stack
char peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        return '\0';
    }
    return stack->items[stack->top];
}

// Function to check if a character is an operand
int isOperand(char ch) {
    return isalnum(ch);
}

// Function to return precedence of operators
int precedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}

// Function to convert infix expression to postfix expression
void infixToPostfix(char* exp) {
    struct Stack stack;
    initStack(&stack);
    int i, k = 0;
    int len = strlen(exp);
    char result[MAX];

    for (i = 0; i < len; i++) {
        // If the character is an operand, add it to the output
        if (isOperand(exp[i])) {
            result[k++] = exp[i];
        }
        // If the character is '(', push it to the stack
        else if (exp[i] == '(') {
            push(&stack, exp[i]);
        }
        // If the character is ')', pop and output from the stack until '(' is found
        else if (exp[i] == ')') {
            while (!isEmpty(&stack) && peek(&stack) != '(') {
                result[k++] = pop(&stack);
            }
            if (!isEmpty(&stack) && peek(&stack) != '(') {
                printf("Invalid expression\n");
                return; // Invalid expression
            } else {
                pop(&stack);
            }
        }
        // If an operator is encountered
        else {
            while (!isEmpty(&stack) && precedence(exp[i]) <= precedence(peek(&stack))) {
                result[k++] = pop(&stack);
            }
            push(&stack, exp[i]);
        }
    }

    // Pop all the operators from the stack
    while (!isEmpty(&stack)) {
        result[k++] = pop(&stack);
    }

    result[k] = '\0'; // Null-terminate the result string
    printf("Postfix expression: %s\n", result);
}

int main() {
    char exp[MAX]="A*B-(C+D)+E\0"; 
    // printf("Enter infix expression: ");
    // scanf("%s", exp);

    infixToPostfix(exp);

    return 0;
}
