/* Problem ID: 2066
 * Author: YQ_Beyond
 * Run ID: 17580242
 * Exe Time: 62MS
 * Exe Memory: 5544K
 * Code Len: 2553 B
 * Language: G++
 */

/* File: spfa.cpp
 * Author: lBlack
 * Date: 2016.07.16
 */

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <queue>

#define MAX 1005
#define INF 0x3fffffff

using namespace std;

int Graph[MAX][MAX];

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

int dis[MAX];
void solve(int n_vertexs, int start, int end)
{
    for (int i = 0; i < n_vertexs; i++) dis[i] = INF; // init all distance to INF
//    int path[n_vertexs];
//    for (int i = 0; i < n_vertexs; i++) path[i] = start; // init all source point to start
    bool visit[n_vertexs];
    for (int i = 0; i < n_vertexs; i++) visit[i] = 0; // init all source point to start
    queue<int> q;
    q.push(start); // push the first node into the queue.
    dis[start] = 0;
    visit[start] = 1;

    int tmp;
    while (!q.empty()){
        tmp = q.front();        q.pop();        visit[tmp] = 0;
        for (int i = 0; i < n_vertexs; i++)
        {        
            if (i == tmp) continue;
            if (Graph[tmp][i] != INF)
            {
                if ( dis[tmp] + Graph[tmp][i] < dis[i])
                {
                    dis[i] = dis[tmp] + Graph[tmp][i];
                    if (visit[i] == 0)
                    {
                        q.push(i);
                        visit[i] = 1;
                    }
                }                
            }
        }
    }
}

int _S[MAX];
int _D[MAX];

int main()
{
//    freopen("in.txt", "r", stdin);
    int T, S, D;
    int a, b, time;    
    while(scanf("%d%d%d", &T, &S, &D) == 3)
    {
        init_graph(Graph, MAX);
        int n_vertexs = 0;
        for (int i = 0; i < T; i++)
        {
            scanf("%d%d%d", &a, &b, &time);
            if (a > n_vertexs) n_vertexs = a;
            if (b > n_vertexs) n_vertexs = b;
            if (time < Graph[a-1][b-1])
                Graph[a-1][b-1] = Graph[b-1][a-1] = time;            
        }
        for (int i = 0; i < S; i++) scanf("%d", &_S[i]);
        for (int i = 0; i < D; i++) scanf("%d", &_D[i]);
        int min = INF;
        for (int i = 0; i < S; i++)
        {
            solve(n_vertexs, _S[i]-1, n_vertexs - 1);
            //for (int j = 0; j < n_vertexs; j++ )
        //    {
        //        printf("%d\n", dis[j]);
        //    }
            for (int j = 0; j < D; j++)
            {
                if (dis[_D[j] - 1] < min && dis[_D[j] - 1] != 0)
                    min = dis[_D[j] - 1];
                //printf("%d\n", dis[_D[j]]);
            }
        }
        printf("%d\n", min);
        //    printf("%d\n", Min_dis[0][n_vertexs - 1]);
        // print_graph(Graph, n_vertexs);
    }
}