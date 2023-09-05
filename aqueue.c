#include <stdio.h>
#include <stdlib.h>

#define MAX_ARR_SIZE 10

int arr[MAX_ARR_SIZE];
int rear = -1;
int front = 0;

void enqueue(int num) {
    if (rear < MAX_ARR_SIZE-1) {
        rear++;
        arr[rear] = num;
    }
    else {
        printf("Queue overflow!");
    }
}

void dequeue() {
    if (rear > -1 && front != rear) {
        front++;
    }
    else if (rear > -1 && front == rear) {
        front, rear = -1;
        printf("Queue is cleared!");
    }
    else {
        printf("Queue is empty!");
    }
}

void displayQueue() {
    printf("-----\n");
    for (int i=front; i<=rear; i++) {
        printf("%d\n", arr[i]);
    }
    printf("-----\n");
}

void main() {
    enqueue(1);
    enqueue(3);
    enqueue(5);
    displayQueue();
    dequeue();
    displayQueue();
}