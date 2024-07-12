#include <stdio.h>
#include <stdlib.h>

struct Node {
    float x;
	float y;
    struct Node* next;
};

void insertAtEnd(struct Node** head_ref, float new_data);
void displayList(struct Node* node);

int main() {
    struct Node* head = NULL;
for(float i=-2.0;i<=2.0;i=i+0.2)
	{
		insertAtEnd(&head, i);
	}
	displayList(head);
    return 0;
}
void insertAtEnd(struct Node** head_ref, float new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	struct Node* last = *head_ref;
    new_node->x = new_data;
	new_node->y=(new_node->x)*(new_node->x);
    new_node->next=NULL;
	 if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
	while (last->next != NULL)
        last = last->next;
    last->next = new_node;
}

void displayList(struct Node* node) {
    printf("The points are:\n");
    while (node != NULL) {
        printf("%.2f \t %.2f \n", node->x,node->y);
        node = node->next;
    }
}
