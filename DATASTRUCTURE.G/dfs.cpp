#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX];
int visited[MAX];
int queue[MAX];
int front = -1, rear = -1;

// Enqueue operation
void enqueue(int vertex) {
    if(rear == MAX - 1)
        return;
    if(front == -1)
        front = 0;
    queue[++rear] = vertex;
}

// Dequeue operation
int dequeue() {
    if(front == -1 || front > rear)
        return -1;
    return queue[front++];
}

// BFS to generate spanning tree
void bfsSpanningTree(int start, int n) {
    int u, v;
    visited[start] = 1;
    enqueue(start);

    printf("Spanning Tree Edges (using BFS):\n");
    while(front <= rear) {
        u = dequeue();
        for(v = 0; v < n; v++) {
            if(adj[u][v] && !visited[v]) {
                visited[v] = 1;
                enqueue(v);
                printf("(%d - %d)\n", u, v);  // Edge in spanning tree
            }
        }
    }
}

int main() {
    int n, e, i, u, v, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    for(i = 0; i < e; i++) {
        printf("Enter edge %d (u v): ", i+1);
        scanf("%d%d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1; // because undirected
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    bfsSpanningTree(start, n);

    return 0;
}

