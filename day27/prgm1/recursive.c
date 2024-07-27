#include <cstddef>
#include <stdio.h>
struct ListNode{
	int data;
	struct ListNode* next;
};

struct ListNode* mergeSortedList(struct ListNode *a, struct ListNode *b)
{
	struct ListNode *result = NULL;
	if(a ==NULL)
		return b;
	if(b==NULL)
		return a;
	if(a->data <= b->data){
	result=a;
	result->next=mergeSortedList(b->next,a);
		}
	else
	{
		result=b;
		result->next=mergeSortedList(b->next,a);
	}
	return result;
}
