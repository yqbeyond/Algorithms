/* Problem ID: 1425
 * Author: YQ_Beyond
 * Run ID: 17589197
 * Exe Time: 936MS
 * Exe Memory: 3560K
 * Code Len: 449 B
 * Language: G++
 */

#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int num[1000005];

int cmp(int a, int b)
{
    return a > b;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, m;
    while (cin>>n>>m)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&num[i]);
        }
        sort(num, num+n, cmp);
        for (int i = 0; i < m-1; i++)
        {
            printf("%d ", num[i]);
        }
        printf("%d\n",num[m-1]);
    }
    return 0;
}