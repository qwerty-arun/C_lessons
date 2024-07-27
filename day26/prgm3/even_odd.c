#include <stdio.h>
struct ListNode{
	int data;
	struct ListNode* next;
};

int even_odd(struct ListNode *head)
{
	while(head && head->next)
	head=head->next;
	if(!head)
	return 0;
	return 1;
}
