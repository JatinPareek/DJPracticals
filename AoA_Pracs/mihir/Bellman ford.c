#include <stdio.h>
#include <stdbool.h>
#define MAX_NODES 100
#define INF 99999
typedef struct {
    int source;
    int destination;
    int weight;
} Edge;
void bellmanFord(int graph[MAX_NODES][MAX_NODES], int numNodes, int source) {
    int distance[MAX_NODES];
    // Initialize distances
    for (int i = 0; i < numNodes; i++) {
        distance[i] = INF;
    }
    distance[source] = 0;
    // Relax edges repeatedly
    for (int i = 0; i < numNodes - 1; i++) {
        for (int j = 0; j < numNodes; j++) {
            for (int k = 0; k < numNodes; k++) {
                if (graph[j][k] != 0 && distance[j] != INF && distance[j] + graph[j][k] < distance[k]) {
                    distance[k] = distance[j] + graph[j][k];
                }
            }
        }
    }
    // Check for negative cycles
    for (int j = 0; j < numNodes; j++) {
        for (int k = 0; k < numNodes; k++) {
            if (graph[j][k] != 0 && distance[j] != INF && distance[j] + graph[j][k] < distance[k]) {
                printf("Graph contains negative cycle\n");
                return;
            }
        }
    }
    // Print distances
    printf("Vertex\tDistance from Source\n");
    for (int i = 0; i < numNodes; i++) {
        printf("%d\t\t%d\n", i, distance[i]);
    }
}
int main() {
    int numNodes = 5;
    int graph[MAX_NODES][MAX_NODES] = {
        {0, 6, 0, 7, 0},
        {0, 0, 5, 8, -4},
        {0, -2, 0, 0, 0},
        {0, 0, -3, 0, 9},
        {2, 0, 7, 0, 0}
    };
    int source = 0;
    bellmanFord(graph, numNodes, source);
    return 0;
}
