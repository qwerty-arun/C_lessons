#include <stdio.h>
#include <stdlib.h>
struct ListNode{
	int data;
	struct ListNode* next;
};

void insert_node(struct ListNode* head, int data)
{
	struct ListNode *ptr1=head,*ptr2=head->next;
	struct ListNode *newNode=(struct ListNode* )malloc(sizeof(struct ListNode));
	if(!head)
		return;
	while(ptr1 && ptr2)
	{
		if(data>(ptr1->data) && data<(ptr2->data))
		{
			ptr1->next=newNode;
			newNode->next=ptr2;
			newNode->data=data;
			printf("Insertion Successful!\n");
			free(ptr2);
			free(ptr1);
			return;
		}
	}
	printf("Insertion not possible!\n");
}
