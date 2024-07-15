#include <stdio.h>
struct ListNode{
	int data;
	struct ListNode* next;
};

struct ListNode* reverse_list(struct ListNode *head)
{
	struct ListNode *temp=NULL, *nextNode=NULL;
	while(head)
	{
		nextNode=head->next;
		head->next=temp;
		temp=head;
		head=nextNode;
	}
	return temp;
}

/* A more easier to understand code
 * struct Node* reverseList(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;
    
    while (current != NULL) {
        next = current->next;  // Store the next node
        current->next = prev;  // Reverse the current node's pointer
        prev = current;        // Move pointers one position ahead
        current = next;
    }
    
    head = prev;
    return head;
}
*/
