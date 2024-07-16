#include <stdio.h>
struct ListNode{
	int data;
	struct ListNode* next;
};

struct ListNode* find_merging_point(struct ListNode* head1, struct ListNode* head2)
{
	struct ListNode *temp1=head1,*temp2=head2;
	while(temp1->next)
	{
		temp2=head2;
		while (temp2->next) {
			if(temp1->next == temp2->next)
			return temp2->next;
			temp2=temp2->next;
		}
		temp1=temp1->next;
	}
}
