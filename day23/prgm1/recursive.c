#include <cstddef>
#include <stdio.h>
struct ListNode{
	int data;
	struct ListNode* next;
};

struct ListNode* recursive(struct ListNode *head)
{
	if(head==NULL)
	{
		return NULL;
	}
	if(head->next=NULL)
	{
		return head;
	}
	struct ListNode* secondElem =head->next;
	//need to unlink the list from the rest or you will get a cycle
	head->next=NULL;
	//reverse everything from second element on
	struct ListNode *revRest=recursive(secondElem); //join the two lists
	secondElem->next=head;
	return revRest;
}
