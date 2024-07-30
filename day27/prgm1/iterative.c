#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
	int data;
	struct ListNode* next;
};

struct ListNode *merged_sorted_list(struct ListNode *head1,struct ListNode* head2)
{
	struct ListNode *new = (struct ListNode*)(malloc(sizeof(struct ListNode)));
	struct ListNode *temp;
	new->next=NULL; temp=new;
	while(head1!=NULL && head2!=NULL)
	{
		if(head1->data <= head2->data)
		{
			temp->next=head1;
			temp=temp->next;
			head1=head1->next;
		}
		else
		{
			temp->next = head2;
			temp =temp->next;
			head2=head2->next;
		}
	}
	if(head1!=NULL)
		temp->next=head1;
	else
		temp->next=head2;
	temp=new->next;
	free(new);
	return temp;
}
