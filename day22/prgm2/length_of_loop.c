#include <stdio.h>
struct ListNode{
	int data;
	struct ListNode* next;
};

int start_of_loop(struct ListNode* head)
{
	struct ListNode* slow = head, *fast=head;
	int loopExists=0,counter=0;
	while(slow && fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			loopExists=1;
			break;
		}
	}
	if(loopExists)
	{
		while(slow!=fast)
		{
			fast=fast->next;
			counter++;
		}
		return counter;
	}
	return 0;//if no loop exits
}
