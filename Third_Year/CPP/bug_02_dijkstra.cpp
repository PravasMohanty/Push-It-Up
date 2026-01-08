// Bug Hunt: Dijkstra's Shortest Path Algorithm
// Difficulty: Third Year - Hard
// Description: Find shortest path from source to all vertices

#include <iostream>
#include <climits>
using namespace std;

#define MAX_VERTICES 6

void dijkstra(int graph[MAX_VERTICES][MAX_VERTICES], int src)
{
    int dist[MAX_VERTICES];
    bool visited[MAX_VERTICES];

    for (int i = 0; i < MAX_VERTICES; i++)
    {
        dist[i] = INT_MAX;
        visited[i] = false;
    }
    dist[src] = 0;

    for (int count = 0; count < MAX_VERTICES - 1; count++)
    {
        int u = -1;
        int minDist = INT_MAX;

        for (int v = 0; v < MAX_VERTICES; v++)
        {
            if (dist[v] < minDist)
            {
                minDist = dist[v];
                u = v;
            }
        }

        visited[u] = true;

        for (int v = 0; v < MAX_VERTICES; v++)
        {
            if (graph[u][v] && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    cout << "Shortest distances from " << src << ":\n";
    for (int i = 0; i < MAX_VERTICES; i++)
    {
        cout << "To " << i << ": " << dist[i] << "\n";
    }
}

int main()
{
    int graph[MAX_VERTICES][MAX_VERTICES] = {
        {0, 4, 2, 0, 0, 0},
        {4, 0, 1, 5, 0, 0},
        {2, 1, 0, 8, 10, 0},
        {0, 5, 8, 0, 2, 6},
        {0, 0, 10, 2, 0, 3},
        {0, 0, 0, 6, 3, 0}};

    dijkstra(graph, 0);
    return 0;
}
