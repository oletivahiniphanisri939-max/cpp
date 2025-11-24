#include <stdio.h>

int n, i, j, visited[10], queue[10], front = 0, rear = -1;
int adj[10][10];

void bfs(int v) {
    visited[v] = 1;
    queue[++rear] = v;

    while (front <= rear) {
        int current = queue[front++];
        for (i = 1; i <= n; i++) {
            if (adj[current][i] && !visited[i]) {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int v;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        visited[i] = 0;
        queue[i] = 0;
    }

    printf("Enter graph data in matrix form:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &adj[i][j]);

    printf("Enter the starting vertex: ");
    scanf("%d", &v);

    bfs(v);

    int reachable = 0;
    printf("The nodes that are reachable are:\n");
    for (i = 1; i <= n; i++) {
        if (visited[i]) {
            printf("%d\t", i);
            reachable = 1;
        }
    }

    if (!reachable) {
        printf("BFS is not possible. No nodes are reachable from vertex %d", v);
    }

    return 0;
}
