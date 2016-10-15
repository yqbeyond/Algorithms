/* Problem ID: 1425
 * Author: YQ_Beyond
 * Run ID: 11145093
 * Exe Time: 656MS
 * Exe Memory: 2236K
 * Code Len: 448 B
 * Language: C++
 */

#include<algorithm>
#include<cstdio>
#include<iostream>
using namespace std;
int num[1000001];
int compare(int x,int y)
{
    return x<y;
}
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&num[i]);
        sort(num,num+n,compare);
        for(int i=n-1;i>n-m;i--)
            printf("%d ",num[i]);
        printf("%d\n",num[n-m]);
    }
    return 0;
}

