#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

// Stack structure for integers
typedef struct {
    int arr[MAX];
    int top;
} Stack;

// Function to initialize stack
void init(Stack *s) {
    s->top = -1;
}

// Function to check if stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to check if stack is full
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Function to push an element onto the stack
void push(Stack *s, int val) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++(s->top)] = val;
}

// Function to pop an element from the stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return s->arr[(s->top)--];
}

// Function to get the top element of the stack
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        exit(1);
    }
    return s->arr[s->top];
}

// Function to determine precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

// Function to perform arithmetic operations
int applyOperation(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
    return 0;
}

// Function to evaluate an infix expression
int evaluate(char* exp) {
    Stack values, ops;
    init(&values);
    init(&ops);

    for (int i = 0; exp[i] != '\0'; i++) {
        // If the current character is a whitespace, skip it
        if (exp[i] == ' ')
            continue;

        // If the current character is a number, push it to the values stack
        if (isdigit(exp[i])) {
            int val = 0;
            while (i < MAX && isdigit(exp[i])) {
                val = (val * 10) + (exp[i] - '0');
                i++;
            }
            push(&values, val);
            i--; // since we incremented in the loop
        }
        // If the current character is an opening bracket, push it to the ops stack
        else if (exp[i] == '(') {
            push(&ops, exp[i]);
        }
        // If the current character is a closing bracket, solve the entire bracket
        else if (exp[i] == ')') {
            while (!isEmpty(&ops) && peek(&ops) != '(') {
                int val2 = pop(&values);
                int val1 = pop(&values);
                char op = pop(&ops);
                push(&values, applyOperation(val1, val2, op));
            }
            pop(&ops); // pop opening bracket
        }
        // If the current character is an operator
        else {
            while (!isEmpty(&ops) && precedence(peek(&ops)) >= precedence(exp[i])) {
                int val2 = pop(&values);
                int val1 = pop(&values);
                char op = pop(&ops);
                push(&values, applyOperation(val1, val2, op));
            }
            push(&ops, exp[i]);
        }
    }

    // Entire expression has been parsed, apply remaining ops to remaining values
    while (!isEmpty(&ops)) {
        int val2 = pop(&values);
        int val1 = pop(&values);
        char op = pop(&ops);
        push(&values, applyOperation(val1, val2, op));
    }

    // Top of 'values' contains result, return it
    return pop(&values);
}

int main() {
    char exp[MAX]="(((2+3)-6)+9)";
    // printf("Enter an infix expression: ");
    // fgets(exp, MAX, stdin);
    printf("Result: %d\n", evaluate(exp));
    return 0;
}
