#include <stdio.h>
#define MAX 20
int queue[MAX];
int front = 0, rear = 0;
void bfs(int graph[MAX][MAX], int n, int start) {
    int visited[MAX] = {0};

    queue[rear++] = start;
    visited[start] = 1;

    while (front < rear) {
        int node = queue[front++];
        printf("%d ", node);

        for (int i = 0; i < n; i++) {
            if (graph[node][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}
int main() {
printf("CH.SC.U4CSE24144\n");
    int n, start;
    int graph[MAX][MAX];
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    printf("Enter starting vertex: ");
    scanf("%d", &start);
    printf("BFS traversal: ");
    bfs(graph, n, start);
    return 0;
}

