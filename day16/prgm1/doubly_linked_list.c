#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct DLLNode{
int data;
	struct DLLNode *prev;
	struct DLLNode *next;
};

void DLL_insert(struct DLLNode **head, int position, int data)
{
	int k=1;
	struct DLLNode *temp, *newNode;
	newNode=(struct DLLNode *)malloc(sizeof(struct DLLNode *));
	if(!newNode)
	{
		printf("Memory Error!\n");
		return;
	}
	newNode->data=data;
	if(position==1)
	{
		newNode->next=*head;
		newNode->prev=NULL;
		if(*head)
		{
			(*head)->prev=newNode;
		}
		*head=newNode;
		return;
	}
	temp=*head;
	while((k<position) && (temp->next)!=NULL)
	{
		temp=(*temp).next;
		k++;
	}
	if(k!=position)
	{
		printf("Desired Position does not exist!\n");
	}
	newNode->next=temp->next;
	newNode->prev=temp;
	if(temp->next)
	{
		temp->next->prev=newNode;
	}
	temp->next=newNode;
	return;
}

void DLL_delete(struct DLLNode **head, int position)
{
	struct DLLNode *temp2, *temp=*head;
	int k=1;
	if(*head==NULL)
	{
		printf("List Is Empty!\n");
		return;
	}
	if(position==1)
	{
		*head=(*head)->next;
		if(*head!=NULL)
		(*head)->prev=NULL; 
	free(temp);
		return;
	}
	while((k<position) && temp->next!=NULL)
	{
		temp=temp->next;
		k++;
	}
	if(k!=position-1)
	{
		printf("Desired Position doesn't exist!\n");
	}

	temp2=temp->prev;
	temp2->next=temp->next;
	if(temp->next)
	temp->next->prev=temp2;
free(temp);
	free(temp2);
	return;
}
int main()
{
	printf("Enter the number of elements in the linked list:\n");
	int n;
	scanf("%d",&n);
	struct DLLNode *head=(struct DLLNode *)malloc(sizeof(struct DLLNode *));
	if(n==1)
	{
		int data;
		printf("Enter first element of the linked list:\n");
		scanf("%d",&data);
		(*head).next=NULL;
		(*head).data=data;
		(*head).prev=NULL;
	}
	return 0;
}
