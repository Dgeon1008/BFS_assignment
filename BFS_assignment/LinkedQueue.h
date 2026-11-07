#pragma once
#define TRUE 1 
#define FALSE 0
#define MAX_QUEUE_SIZE 10

typedef int element;

typedef struct {
    element queue[MAX_QUEUE_SIZE];
    int front, rear;
}QueueType;

void init(QueueType* q);
int is_empty(QueueType* q);
int is_full(QueueType* q);
void enqueue(QueueType* q, int item);
int dequeue(QueueType* q);