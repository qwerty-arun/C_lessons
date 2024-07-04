#include <cstddef>
#include <stdio.h>
#include <stdlib.h>
struct ListNode{
	int data;
	struct ListNode *next; //points to the next element
};
	int ListLength(struct ListNode *head)
{
	struct ListNode *current = head;
	int count=0;
	while(current!=NULL)
	{
		count++;
		current=current->next;
	}
	return count;
}

void insert(struct ListNode **head, int position, int data)
{
		int k=0;
		struct ListNode *newNode,*p,*q;
		newNode=(struct ListNode*)malloc(sizeof(struct ListNode));
			if(newNode)
	{
		printf("Memory Allocation failed!\n");
		return;
	}
		newNode->data=data;
		p=*head;
	if(position==1)
	{
		newNode->next=*head;
		*head=newNode;
	}
	else
	{
		while((p!=NULL) && (k<position))
		{
			k++;
			q=p;
			p=p->next;
		}
		q->next=newNode;
		newNode->next=p;
	}
}

int main()
{

	return 0;
}
