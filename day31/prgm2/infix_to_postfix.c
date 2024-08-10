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

void infix_to_postfix(char exp[]) {
    struct Stack stack;
    initStack(&stack);

    for (int i = 0; i < strlen(exp); i++) 
    {
        if ((exp[i] >= 65 && exp[i]<=90) || (exp[i]>=97 && exp[i]<=122))
        {
            printf("%c",exp[i]);
        }
        else if (exp[i] == ')' || (exp[i] == 125) || exp[i] == ']') {
            char c='\0';
            while(c!='(')
            {
                 c= pop(&stack);
                printf("%c",c);
            }
        }
        else {
            char c;
            while(c!='(' || isEmpty(&stack))
                {
                    c=pop(&stack);
                    printf("%c",c);
                }
                push(&stack,exp[i]);
            }
    }
}

int main()
{
    char exp[MAX]="A*B-(C+D)+E\0";
    // printf("Enter an expression: ");
    // scanf("%s", exp);
    infix_to_postfix(exp); 
    return 0;}
