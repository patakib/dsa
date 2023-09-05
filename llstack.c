#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

struct Node *top = NULL;

void push(int value) {
    struct Node *currentNodePtr = (struct Node*) malloc(sizeof(struct Node));
    currentNodePtr->data = value;
    /* same as:
    (*currentNodePtr).data = data;
    */
   currentNodePtr->link = top;
   top = currentNodePtr;
}

void pop() {
    struct Node *ptr = top;
    top = top->link;
    free(ptr);
}

void printStack() {
	printf("---------\n");
	struct Node *ptr = top;
	while(ptr != NULL) {
		printf("-%d", (*ptr).data);
		ptr = (*ptr).link;
	}
	printf("\n----------\n");
}

void main() {
    for (int i=0; i<5; i++) {
        push(i);
    }
    printStack();
    pop();
    pop();
    printStack();
}