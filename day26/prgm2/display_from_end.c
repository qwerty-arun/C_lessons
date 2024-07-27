#include <stdio.h>
struct ListNode{
	int data;
	struct ListNode* next;
};

void display_from_end(struct ListNode* head)
{
	if(!head)
	{
		return;
	}
	display_from_end(head->next);
	printf("%d",head->data);
}
