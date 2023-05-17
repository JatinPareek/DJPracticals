/*#include <stdio.h>
#define INF 99999
#define V 3

void printSolution(int dist[][V]);

void floydWarshall(int graph[][V])
{
    int dist[V][V], i, j, k;

    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    for (k = 0; k < V; k++)
    {
        for (i = 0; i < V; i++)
        {
            for (j = 0; j < V; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j] && dist[i][k]!= INF && dist[k][j]!= INF)
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    printSolution(dist);
}

void printSolution(int dist[][V])
{
    printf("The following matrix shows the shortest distances between every pair of vertices:\n");
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (dist[i][j] == INF)
                printf("INF");
            else
                printf("%d\t",dist[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int graph[V][V] = {{INF,4,18},
                        {6,INF,5},
                        {4,INF,INF}};

    floydWarshall(graph);

    return 0;
}*/


#include<stdio.h>
#include<stdlib.h>
int a[10][10] , d[10][10] ,n;

void Allpaths()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
                if(i == j)
                {
                    d[i][j]=0;
                }
                else
                {
                    d[i][j]=a[i][j];
                }
            
         }
    }


    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(d[i][j]>d[i][k]+d[k][j])
                {
                    d[i][j]= d[i][k] + d[k][j];
                }
            }
        }
    }
}

int main()
{
    printf("Name:JatinPareek\nSAPID: 60019210026\nBranch: CSE(ICB)\n");
    printf("Enter the no of vertices: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int x;
   
    Allpaths();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
    return 0;

}
