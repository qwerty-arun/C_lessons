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

void insertNode(struct ListNode **head, int position, int data)
{
		int k=0;
		struct ListNode *newNode,*p,*q;
		newNode=(struct ListNode*)malloc(sizeof(struct ListNode*));
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
		while((p!=NULL) && (k<position))//insert at a position
		{
			k++;
			q=p;
			p=p->next;
		}
		q->next=newNode;
		newNode->next=p;
	}
}

void deleteNode(struct ListNode **head,int position)
{
	int k=1;
	struct ListNode *p,*q;
	if(*head==NULL)
	{
		printf("List Empty!");
		return;
	}

	p=*head;
	if(position==1)
	{
		*head = (*head)->next;
		free(p);
		return;
	}
	else
	{
		while((p!=NULL) & (k<position))
		{
			k++;
			q=p;
			p=p->next;
		}
		if(p==NULL)
		{
			printf("Position doesn't exist!\n");
		}
		else
		{
			q->next=p->next;
			free(p);
		}
	}
}

void deleteList(struct ListNode **head)
{
	struct ListNode *auxilaryNode, *iterator;
	iterator=*head;
	while(iterator)
	{
		auxilaryNode=iterator->next;
		free(iterator);
		iterator=auxilaryNode;
	}
	*head=NULL;
}

int main()
{
	printf("Enter no. of elements in the list\n");
	int n;
	scanf("%d",&n);
	printf("Enter the data for %d elements\n",n);
	struct ListNode *head=(struct ListNode*)malloc(sizeof(struct ListNode));
	for(int i=1;i<=n;i++)
	{
		int data;
		scanf("%d",&data);
		insertNode(&head, i-1,data);
	}
	int listLength=ListLength(head);
	printf("No. of elements in the list: %d\n",listLength);
	return 0;
}
