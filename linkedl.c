#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *link;
};

struct Node *head = NULL;

void insertAtBeginning(int data) {
	struct Node *currentNodePtr = (struct Node*) malloc(sizeof(struct Node));
	currentNodePtr->data = data;
	currentNodePtr->link = head;
	head = currentNodePtr;
}

void insertAtEnd(int data) {
	struct Node *currentNodePtr = (struct Node*) malloc(sizeof(struct Node));
	//assigning values to the pointer
	currentNodePtr->data = data;
	currentNodePtr->link = NULL;
	// traversing through all nodes until we find the last node (where link will be NULL)
	struct Node *ptr = head;
	while(ptr->link != NULL) {
		ptr = ptr->link;
	};
	//update the last node's link to point to the node we want to add to the linked list
	ptr->link = currentNodePtr;
}

void printLinkedList() {
	printf("---------\n");
	struct Node *ptr = head;
	while(ptr != NULL) {
		printf("-%d", (*ptr).data);
		ptr = (*ptr).link;
	}
	printf("\n----------\n");
}

void main() {
	int i;
	for (i=0; i<10; i++) {
		if (i%2 == 0) {
			insertAtBeginning(i);
		}
		else {
			insertAtEnd(i);
		};
	};
	printLinkedList();
}