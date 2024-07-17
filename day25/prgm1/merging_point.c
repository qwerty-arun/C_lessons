#include <cstddef>
# include <stdio.h>
struct ListNode{
	int data;
	struct ListNode *next;
};

struct ListNode* merge_point(struct ListNode* list1, struct ListNode* list2)
{
	int l1=0,l2=0,diff=0;
	struct ListNode *head1=list1,*head2=list2;
	while(head1!=NULL)
	{
		l1++;
		head1=head1->next;
	}
	while(head2!=NULL)
	{
		l2++;
		head2=head2->next;
	}
if(l1<l2){
		head1=list2;head2=list1;diff=l2-l1;
	}	
	else
	{
		head1=list1;head2=list2;diff=l1-l2;
	}
	for(int i=0;i<diff;i++)
	head1=head1->next;
	while(head1!=NULL && head2!=NULL)
	{
		if(head1==head2)
		return head1;
		head1=head1->next;
		head2=head2->next;
	}
	return  NULL;
}
