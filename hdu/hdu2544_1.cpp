/* Problem ID: 2544
 * Author: YQ_Beyond
 * Run ID: 17579004
 * Exe Time: 15MS
 * Exe Memory: 1964K
 * Code Len: 1595 B
 * Language: G++
 */

/* File: loyd.cpp
 * Author: lBlack
 * Date: 2016.07.16
 */

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>

#define MAX 1005
#define INF 0x3fffffff

//int Graph[MAX][MAX];
int Min_dis[MAX][MAX];

void print_graph(int graph[MAX][MAX], int n_vertexs)
{
    for (int i = 0; i < n_vertexs; i++)
    {
        for (int j = 0; j < n_vertexs; j++)
        {
            printf("%12d", graph[i][j]);
        }
        printf("\n");
    }
}

void init_graph(int graph[MAX][MAX], int n_vertexs)
{
    for (int i = 0; i < n_vertexs; i++)
    {
        for (int j =0 ;j < n_vertexs; j++)
        {
            graph[i][j] = i == j ? 0 : INF;
        }
    }
}

void solve(int n_vertexs)
{
    for (int i = 0; i < n_vertexs; i++ )
    {
        for (int j = 0; j < n_vertexs; j++)
        {
            for (int k = j + 1; k < n_vertexs; k++)
            {    
                if (i != j)
                if (Min_dis[j][i] + Min_dis[i][k] < Min_dis[j][k])
                {
                    Min_dis[k][j] = Min_dis[j][k] = Min_dis[j][i] + Min_dis[i][k];
                }
            }
        }
//        print_graph(Min_dis, n_vertexs);
    }
}

using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    int n_vertexs, n_edges;
    int v1, v2, dis;
    while(scanf("%d%d", &n_vertexs, &n_edges))
    {
        if (n_vertexs == 0 && n_edges == 0) break;
//        init_graph(Graph, n_vertexs);
        init_graph(Min_dis, n_vertexs);
        for (int i = 0; i < n_edges; i++)
        {
            scanf("%d%d%d", &v1, &v2, &dis);
//            Graph[v1][v2] = Graph[v2][v1] = dis;
            Min_dis[v1-1][v2-1] = Min_dis[v2-1][v1-1] = dis;
        }
        solve(n_vertexs);
        printf("%d\n", Min_dis[0][n_vertexs - 1]);
        // print_graph(Graph, n_vertexs);
    }

}