#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"

// 공백 상태 검출 함수
void init(QueueType* q) {
    q->front = q->rear = 0;
}

// 공복 상태 검출 함수
int is_empty(QueueType* q) {
    if (q->front == q->rear) {
        return TRUE;
    }
    else
        return FALSE;
};

//포화 상태 검출 함수
int is_full(QueueType* q) {
    if ((q->rear + 1) % MAX_QUEUE_SIZE == q->front) {
        return TRUE;
    }
    else
        return FALSE;
}

//삽입 함수
void enqueue(QueueType* q, int item) {
    if (!is_full(q)) {
        q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
        q->queue[q->rear] = item;
    }
    else
        printf("QUEUE is FULL");
}
int dequeue(QueueType* q) {
    if (!is_empty(q)) {
        q->front = (q->front + 1) % MAX_QUEUE_SIZE;
        return q->queue[q->front];
    }
    else
        printf("QUEUE is EMPTY");
}