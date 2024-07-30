#include <stdio.h>
#include <stdlib.h>
struct ListNode{
	int data;
	struct ListNode* next;
};

void split_circular_list(struct ListNode** head)
{
	struct ListNode* slow=*head, *fast=*head;
	struct ListNode *head1=*head,*head2;
	while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
		head2=slow->next;
		slow->next=*head; // breaking point, the next pointer points back to the starting of the list
		struct ListNode* temp=head2;
		while(temp->next!=*head)
		{
			temp=temp->next;
		}
		temp->next=head2;	
	free(slow);
	free(fast);
}
