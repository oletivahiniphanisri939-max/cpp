#include <stdio.h>

#define MAX 100

int adj[MAX][MAX];
int visited[MAX];
int n;

void dfsSpanningTree(int u) {
    visited[u] = 1;

    for(int v = 0; v < n; v++) {
        if(adj[u][v] && !visited[v]) {
            printf("(%d - %d)\n", u, v);  // Edge in spanning tree
            dfsSpanningTree(v);
        }
    }
}

int main() {
    int e, i, u, v, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    for(i = 0; i < e; i++) {
        printf("Enter edge %d (u v): ", i+1);
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1; // because undirected
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("Spanning Tree Edges (using DFS):\n");
    dfsSpanningTree(start);

    return 0;
}
