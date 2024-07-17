#include <cstddef>
#include <stdio.h>
struct ListNode{
	int data;
	struct ListNode* next;
};

void middle_of_list(struct ListNode* head)
{
	if(!head)
	{
		printf("The list is empty!\n");
		return;
	}
	struct ListNode* slow=head;
	struct ListNode* fast=head;
	while(fast && fast->next && fast->next->next)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	if(fast->next->next==NULL)
	{
		printf("The middle elements are: %d\t%d\n",slow->data, slow->next->data);
	}
	else
	{
		printf("The middle element is: %d\n",slow->data);
	}
}
