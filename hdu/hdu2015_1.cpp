/* Problem ID: 2015
 * Author: YQ_Beyond
 * Run ID: 17613650
 * Exe Time: 0MS
 * Exe Memory: 1572K
 * Code Len: 297 B
 * Language: G++
 */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    int n, m;
    while (~scanf("%d%d",&n,&m))
    {
        int i;
        for (i = 1; i <= n - m ; i += m)
        {
            printf("%d ", (2*i+m-1));
        }
        printf("%d\n", i + n);
    }
    return 0;
}