#include <stdio.h>
struct ListNode{
	int data;
	struct ListNode *next[1];
};
struct ListNode * nthNodeFromEnd(struct listNode* head, int n)
{
	struct ListNode *pnth=NULL, *ptemp=head;
	for(int count=1;count<=n;count++){
		if(ptemp)
		ptemp=ptemp->next;
	}
	while(ptemp){
		if(pnth==NULL)
		pnth=head;
		else
		pnth=pnth->next;
		ptem=ptemp->next;
	}
	if(pnth)
	return pnth;
	return NULL;
}
