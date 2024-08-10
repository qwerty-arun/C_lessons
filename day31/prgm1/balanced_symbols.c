#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX 20

struct Stack {
    int top;
    char items[MAX];
};

// Function to initialize the stack
void initStack(struct Stack* stack) {
    stack->top = -1;
}

bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

void push(struct Stack* stack, char item) {
    if (stack->top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack->items[++stack->top] = item;
}

char pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return '\0';
    }
    return stack->items[stack->top--];
}

// Function to check if the given pairs of symbols are matching
bool isMatchingPair(char character1, char character2) {
    return (character1 == '(' && character2 == ')') ||
           (character1 == '{' && character2 == '}') ||
           (character1 == '[' && character2 == ']');
}

// Function to check if the symbols are balanced
bool areSymbolsBalanced(char exp[]) {
    struct Stack stack;
    initStack(&stack);

    for (int i = 0; i < strlen(exp); i++) {
        // If the character is an opening symbol, push it to the stack
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(&stack, exp[i]);
        }
        // If the character is a closing symbol
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            // Check if the stack is empty or the symbols do not match
            if (isEmpty(&stack) || !isMatchingPair(pop(&stack), exp[i])) {
                return false;
            }
        }
    }

    // If the stack is empty, all symbols were balanced
    return isEmpty(&stack);
}

int main() {
    char exp[MAX]="() ({[()]})\n";
    // printf("Enter an expression: ");
    // scanf("%s", exp);

    if (areSymbolsBalanced(exp)) {
        printf("The symbols are balanced.\n");
    } else {
        printf("The symbols are not balanced.\n");
    }
    return 0;
}
