/* Problem ID: 3264
 * Author: 1307010418
 * Memory: 8012K
 * Time: 1704MS
 */

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

const int maxn = 50005;
int maxsum[maxn][20];
int minsum[maxn][20];
int n;

int max(int x,int y)
{
    return x>y?x:y;
}

int min(int x,int y)
{
    return x<y?x:y;
}
void RMQ()
{
    for(int j=1 ; (1<<j) <= n ; j++)
    {
        for(int i=1 ; i+(1<<j)-1<=n ; i++)
        {
            maxsum[i][j]=max(maxsum[i][j-1],maxsum[i+(1<<(j-1))][j-1]);
            minsum[i][j]=min(minsum[i][j-1],minsum[i+(1<<(j-1))][j-1]);
        }
    }
}
int q_max(int i,int j)
{
    int k=(int)(log((j-i+1)*1.0)/log(2.0));
    return max(maxsum[i][k],maxsum[j-(1<<k)+1][k]);
}
int q_min(int i,int j)
{
    int k=(int)(log((j-i+1)*1.0)/log(2.0));
    return min(minsum[i][k],minsum[j-(1<<k)+1][k]);
}
void init()
{
    for(int i=1;i<=n;i++)
        {scanf("%d",&maxsum[i][0]);minsum[i][0]=maxsum[i][0];}
    RMQ();
}
int main()
{
   // freopen("data.txt","r",stdin);
    int q,x,y;
    while(scanf("%d %d",&n,&q)!=EOF)
    {
        init();
        for(int i=0;i<q;i++)
        {
            scanf("%d%d",&x,&y);
            printf("%d\n",q_max(x,y)-q_min(x,y));
        }

    }
    return 0;
}
