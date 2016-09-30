#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#define inf 99999999
using namespace std;

struct node
{
    int now,to;
} e[10005];
int first[105],__next[10005];
int power[105],map[105][105],n;

void add_edge(node e,int k)
{
    __next[k] = first[e.now];
    first[e.now] = k;
}

void Floyd()
{
    int i,j,k;
    for(k = 1; k<=n; k++)
        for(i = 1; i<=n; i++)
            for(j = 1; j<=n; j++)
                if(!map[i][j])
                    map[i][j] = map[i][k]&&map[k][j];
}

int bellman_ford(int len)
{
    int dis[105];
    int i,k,now,to;
    for(i = 1; i<=n; i++)
        dis[i] = -inf;
    dis[1] = 100;
    for(k = 0; k<n-1; k++)
    {
        for(i = 0; i<len; i++)
        {
            now = e[i].now;
            to = e[i].to;
            if(dis[to]<dis[now]+power[to] && dis[now]+power[to]>0)
                dis[to] = dis[now]+power[to];
        }
    }
    for(i = 0; i<len; i++)
    {
        now = e[i].now;
        to = e[i].to;
        if(dis[to]<dis[now]+power[to] && dis[now]+power[to]>0 && map[to][n])//判断环，要注意判断这个环能到终点
            return 1;
    }
    return dis[n]>0;
}

int main()
{
	freopen("in.txt", "r", stdin);
    int i,j,len,m;
    while(~scanf("%d",&n),n>0)
    {
        memset(e,0,sizeof(e));
        memset(power,0,sizeof(power));
        memset(map,0,sizeof(map));
        memset(first,-1,sizeof(first));
        memset(__next,-1,sizeof(__next));
        len = 0;
        for(i = 1; i<=n; i++)
        {
            scanf("%d%d",&power[i],&m);
            for(j = 0; j<m; j++)
            {
                int x;
                scanf("%d",&x);
                e[len].now = i;
                e[len].to = x;
                map[i][x] = 1;
                add_edge(e[len],len);
                len++;
            }
        }
        Floyd();
        if(!map[1][n])
        {
            printf("hopeless\n");
            continue;
        }
        if(bellman_ford(len))
            printf("winnable\n");
        else
            printf("hopeless\n");
    }

    return 0;
}

