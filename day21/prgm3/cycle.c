#include <stdio.h>
struct ListNode{
int data;
	struct ListNode *next;
};
int loop(struct ListNode *head)
{
	struct ListNode *fast =head, *slow =head;
	while(fast && slow && fast->next){
		slow=slow->next;
		fast=fast->next->next;
		if(fast == slow)
		return 1;
	}
	return 0;
}
