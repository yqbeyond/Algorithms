/* Problem ID: 3790
 * Author: YQ_Beyond
 * Run ID: 17570668
 * Exe Time: 390MS
 * Exe Memory: 9544K
 * Code Len: 2062 B
 * Language: G++
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#define MAXN 1017
#define INF 0x3fffffff
using namespace std;
int mat[MAXN][MAXN];
int cost[MAXN][MAXN];
int n,m;//n为结点数，m为道路数
int MONEY[MAXN];
int dijkstra (int s,int f)
{
    //s为起点， f：为终点
    int dis[MAXN];//记录到任意点的最短距离
    int mark[MAXN];//记录被选中的结点 
    int i, j, k;
    for(i = 1; i <= n; i++)
    {
        mark[i] = 0;//初始化所有结点，每个结点都没有被选中 
        dis[i] = mat[s][i];
        MONEY[i] = cost[s][i];
    }
    mark[s] = 1;//start结点被选中 
    dis[s] = 0;//将start结点的的距离设置为0 
    int min;//设置最短的距离。 
    for(i = 1; i <= n; i++)
    {
        k = 1;//赋初值很重要
        min = INF;
        for(j = 1; j <= n;j++)
        {
            if(mark[j] == 0 && dis[j] < min)//未被选中的结点中，距离最短的被选中 
            {
                min = dis[j] ;
                k = j;
            }
        }
        mark[k] = 1;//标记为被选中 
        for(j = 1; j <= n; j++)
        {
            if(!mark[j] && dis[j]>dis[k]+mat[k][j])//修改剩余结点的最短距离 
            {
                dis[j] = dis[k] + mat[k][j];
                MONEY[j]=MONEY[k]+cost[k][j];
            }
            else if(!mark[j] && dis[j]==dis[k]+mat[k][j])
            {
                if(MONEY[j] > MONEY[k]+cost[k][j])
                    MONEY[j] = MONEY[k]+cost[k][j];
            }    
        }
    }
    return dis[f];    
} 

void init()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cost[i][j] = INF;
            if(i == j)
                mat[i][j] = 0;
            else
                mat[i][j] = INF;
        }
    }
}
int main()
{
    int i,j;
    int a,b,dis,mon;
    while(scanf("%d %d",&n,&m))
    {
        if(n == 0 && m == 0)
            break;
        init();
        for(i = 1; i <= m; i++)
        {
            scanf("%d %d %d %d",&a,&b,&dis,&mon);
            if(dis < mat[a][b])
            {
                mat[a][b] = mat[b][a] = dis;
                cost[a][b] = cost[b][a]= mon;
            }
            if(dis == mat[a][b])
            {
                if(mon < cost[a][b])
                    cost[a][b] = cost[b][a] = mon;
            }
        }
        int s, e;
        scanf("%d%d",&s,&e);
        int ans = dijkstra(s, e);
        printf("%d %d\n",ans,MONEY[e]);
    }
    return 0;
}