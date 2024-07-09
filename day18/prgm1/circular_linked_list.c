#include <stdio.h>
#include <stdlib.h>
struct CLLNode{
	int data;
	struct CLLNode *next;
};

int CircularListLength(struct CLLNode *head)
{
	struct CLLNode *current = head;
	int count=0;
	if(head==NULL)
	{
		return 0;
	}
	do
	{
		current=current->next;
		count++;
	}while(current!=head);
	return count;
}

void PrintCircularList(struct CLLNode *head)
{
	struct CLLNode *current = head;
	if(head==NULL)
	{
		printf("No elements in the list!\n");
		return;
	}
	do
	{
		current=current->next;
		printf("%d\t",current->data);
	}while(current!=head);
}

void InsertNodeatEND(struct CLLNode **head, int data)
{
	struct CLLNode *current = *head;
	struct CLLNode *newNode=(struct CLLNode *)malloc(sizeof(struct CLLNode));
	if(!newNode)
	{
		printf("Memory allocation failed!\n");
		return;
	}
	do{
		current=current->next;
	}while((current->next) != *head);
	if(*head==NULL)
	{
		*head=newNode;	
	}
	else
	{
		newNode->next=*head;
		current->next=newNode;
		current->data=data;
	}
}

void InsertNodeatFront(struct CLLNode **head,int data)
{
	struct CLLNode *current = *head;
	struct CLLNode *newNode=(struct CLLNode *)malloc(sizeof(struct CLLNode));
	if(!newNode)
	{
		printf("Memory allocation failed!\n");
		return;
	}
	do{
		current=current->next;
	}while(current != *head);
	if(*head==NULL)
	{
		*head=newNode;	
	}
	else
	{
		newNode->next=*head;
		current->next=newNode;
		*head=newNode;
		current->data=data;
	}

}

void DeleteNodeatEND(struct CLLNode **head)
{
	struct CLLNode *temp=*head, *current=*head;
	if(*head==NULL)
	{
		printf("List Empty!\n");
		return;
	}
	while(current->next !=*head)
	{
		temp=current;
		current=current->next;
	}
	temp->next=current->next;
	free(current);
	return;
}

void DeleteNodeatFront(struct CLLNode **head)
{

	struct CLLNode *temp=*head,*current=*head;
	if(*head==NULL)
	{
		printf("List Empty!\n");
		return;
	}
	while(current==*head)
	{
		temp=current;
		current=current->next;
	}
	current->next=(*head)->next;
	(*head)=(*head)->next;
	free(temp);	
	free(current);	
	return;
}
int main()
{

	return 0;
}
