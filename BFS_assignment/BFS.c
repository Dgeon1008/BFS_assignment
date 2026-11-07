#include "LinkedQueue.h"
#include "adjMatrix.h"
#include "BFS.h"

int visited[MAX_VERTEX];

void BFS_adjList(graphType* g, int v) {
    int w;
    QueueType* q = (QueueType*)malloc(sizeof(QueueType));
    qinit(q);
    visited[v] = TRUE;
    printf("%c ", v + 65);
    enqueue(q, v);
    while (!is_empty(q)) {
        v = dequeue(q);
        for (w = 0; w < g->n; w++) {
            if (g->adjMatrix[v][w] && !visited[w]) {
                visited[w] = TRUE;
                printf("%c ", w + 65);
                enqueue(q, w);
            }
        }
    }
}