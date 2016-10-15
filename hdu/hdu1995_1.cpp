/* Problem ID: 1995
 * Author: YQ_Beyond
 * Run ID: 12346768
 * Exe Time: 0MS
 * Exe Memory: 288K
 * Code Len: 274 B
 * Language: G++
 */

#include <stdio.h>
#include<iostream>
using namespace std;

__int64 hanoi(int n,int k)
{
    return n>k?hanoi(n-1,k)*2:1;
}

int main()
{
    int t,n,k;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        printf("%I64d\n",hanoi(n,k));
    }
    return 0;
}
