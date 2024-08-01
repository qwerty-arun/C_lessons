#include <stdio.h>
#include <stdlib.h>
struct ListNode{
	int rank;
	struct ListNode* next;
};

void josephus_circle()
{
	struct ListNode *p,*q;
	int N,M;
	printf("Enter N (number of players): ");
	scanf("%d",&N);
	printf("Enter M (every M-th player gets eliminated): ");
	scanf("%d",&M);
	p=q=(struct ListNode* )malloc(sizeof(struct ListNode));
	p->rank=1;
	for(int i=2;i<=N;i++)
	{
		p->next=(struct ListNode*)malloc(sizeof(struct ListNode));
		p=p->next;
		p->rank=i;
	}
	p->next=q; // close the circular linked list by having the last node point to the first node in the list
	for(int count=N;count>1;--count){ //eliminate every M-th player as long as more than one player remains 
		for(int i=0;i<M-1;i++)
			p=p->next;
		p->next=p->next->next; //skip a node and point to the node after the next node, which is nothing but eliminating
	}
	printf("Last player left standing (Josphus position) is %d\n",p->rank);
	}
