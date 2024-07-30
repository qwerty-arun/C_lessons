#include <stdio.h>
struct ListNode{
	int data;
	struct ListNode* next;
};

struct ListNode* ReversePairIterative(struct ListNode *head)
{
	struct ListNode *temp1=NULL, *temp2=NULL, *current=head;
	while(current!=NULL && current->next!=NULL)
	{
		if(temp1!=NULL)
		{
			temp1=current->next;
		}
		temp1=current->next;
		current->next=current->next->next;
		temp1->next=current;
		if(temp2==NULL)
			temp2=temp1;
		current=current->next;
	}
	return temp2;
}
