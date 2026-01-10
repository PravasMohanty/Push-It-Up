// Bug Hunt: Graph Depth-First Search (DFS)
// Difficulty: Third Year - Hard
// Description: Implement DFS for graph traversal

#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 10

typedef struct
{
    int adj[MAX_VERTICES][MAX_VERTICES];
    int vertices;
} Graph;

void dfs(Graph *g, int v, bool visited[])
{
    printf("%d ", v);
    visited[v] = true;

    for (int i = 0; i < g->vertices; i++)
    {
        if (g->adj[v][i] == 1 && !visited[i])
        {
            dfs(g, i, visited);
        }
    }
}

int main()
{
    Graph g;
    g.vertices = 5;

    // Initialize adjacency matrix (simplified example)
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            g.adj[i][j] = 0;

    // Add edges
    g.adj[0][1] = 1;
    g.adj[0][2] = 1;
    g.adj[1][2] = 1;
    g.adj[2][0] = 1;
    g.adj[2][3] = 1;

    bool visited[MAX_VERTICES] = {false};
    printf("DFS: ");
    dfs(&g, 0, visited);
    printf("\n");

    return 0;
}
