/* Problem ID: 1556
 * Author: YQ_Beyond
 * Run ID: 13118439
 * Exe Time: 748MS
 * Exe Memory: 2012K
 * Code Len: 1018 B
 * Language: C++
 */

#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

const int maxn = 100005;
int n,c[maxn];

int lowbit(int x)
{
    return x&(-x);
}
void modify(int x,int val)
{
    while(x>0)
    {
        c[x]+=val;
        x-=lowbit(x);
    }
}
int sum(int x)
//向上统计每个区间被染色的次数
{
    int sum=0;
    while(x<=n)
    {
        sum+=c[x];
        x+=lowbit(x);
    }
    return sum;
}

void work()
{
    int a,b;
    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&a,&b);
        //将b以下区间+1（大区间的更新包含了小区间的更新）
        modify(b,1);
        //将a以下区间-1（大区间的更新包含了小区间的更新）
        modify(a-1,-1);
        //以两步计算[a,b]区间更新的次数
    }
    for(int j=1; j<n; j++)
    {
        printf("%d ",sum(j));
    }
    printf("%d\n",sum(n));
}
int main()
{
    //freopen("data.txt","r",stdin);
    while(scanf("%d",&n),n)
    {
        memset(c,0,sizeof(c));
        work();
    }
    return 0;
}
