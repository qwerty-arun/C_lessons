#include <stdio.h>
#include <stdlib.h>
# define MAXSIZE 10
struct ArrayStack{
	int top;
	int capacity;
	int *array;
};
struct ArrayStack *create_stack()
{
	struct ArrayStack *S = malloc(sizeof(struct ArrayStack));
	if(!S)
	return NULL;
	S->capacity=MAXSIZE;
	S->top=-1;
	S->array=malloc(S->capacity * sizeof(int));
	if(!S->array)
	return NULL;
	return S;
}

int IsEmptyStack(struct ArrayStack *S)
{
	return(S->top==-1);
}

int IsFullStack(struct ArrayStack *S)
{
	return(S->top==S->capacity-1);
}

void Push(struct ArrayStack *S, int data)
{
	if(IsFullStack(S))
		printf("Stack Overflow!\n");
	else
	S->array[++S->top]=data;
}

int pop(struct ArrayStack *S)
{
	if(IsEmptyStack(S))
	{
		printf("Stack is Empty\n");
		return INT_MIN;
	}
	else
	return (S->array[S->top--]);
}

void DeleteStack(struct ArrayStack *S)
{
	if(S)
	{
		if(S->array)
			free(S->array);
		free(S);
	}
}
