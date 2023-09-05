#include <stdio.h>
#include <stdlib.h>

#define MAX_ARR_SIZE 10

int arr[MAX_ARR_SIZE];
int top = -1;

void push(int num) {
    if (top < MAX_ARR_SIZE-1) {
        top++;
        arr[top] = num;
    }
    else {
         printf("Stack overflow!\n");
    }
}

void pop() {
    if (top > -1) {
        top--;
    }
    else {
        printf("Stack is already empty!\n");
    }
}

void getTop() {
    if (top > -1) {
        printf("Number on top of the stack is %d.\n", arr[top]);
    }
    else {
        printf("Stack is empty!\n");
    }
}

int isEmpty() {
    if (top == -1) {
        return 0;
    }
    else {
        return 1;
    }
}

void main() {
    for (int i=0; i<10; i++) {
        push(i);
    }
    push(10);
    for (int i=0; i<10; i++) {
        pop();
    }
    printf("\n%d\n", isEmpty());
    push(99);
    getTop();
}