/* Problem ID: 1421
 * Author: YQ_Beyond
 * Run ID: 11791571
 * Exe Time: 390MS
 * Exe Memory: 308K
 * Code Len: 729 B
 * Language: C++
 */

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int dp[3][1002];
int a[2002];

int min(int a,int b)
{
    return a>b?b:a;
}

void DP(int n,int k)
{
    int i,j;
    memset(dp,0,sizeof(dp));
    for(i=2;i<=n;i++)
    for(j=1;j<=k&&j*2<=i;j++)
    {
        if(j*2==i)
        dp[i%3][j]=dp[(i-2)%3][j-1]+(a[i-1]-a[i])*(a[i-1]-a[i]);
        else
        dp[i%3][j]=min(dp[(i-1)%3][j],dp[(i-2)%3][j-1]+(a[i-1]-a[i])*(a[i-1]-a[i]));
    }
}
int main()
{
    int i;
    int n,k;
    while(cin>>n>>k)
    {
        a[0]=0;
        for(i=1;i<=n;i++)
        cin>>a[i];
        sort(a,a+n+1);
        DP(n,k);
        cout<<dp[n%3][k]<<endl;
    }
    return 0;
}
