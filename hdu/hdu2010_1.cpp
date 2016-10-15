/* Problem ID: 2010
 * Author: YQ_Beyond
 * Run ID: 17612543
 * Exe Time: 0MS
 * Exe Memory: 1576K
 * Code Len: 652 B
 * Language: G++
 */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

int arr[900];
int main()
{
    int m, n;
    int a, b, c;
    int base[10];
    for (int i = 0; i < 10; i++)
    {
        base[i] = i * i * i;
    }
    while (~scanf("%d%d", &m, &n))
    {
        int t = 0;
        for (int i = m; i <=n; i++)
        {
            a = i / 100;
            b = (i / 10) % 10;
            c = i % 10;
            //printf ("%d %d %d\n", a, b, c);
            if (base[a] + base[b] + base[c] == i)
            {                
                arr[t++] = i;
            }
        }
        if (t == 0)
        {
            printf("no\n");
        }
        else
        {
            printf("%d", arr[0]);
            for (int i = 1;i < t; i++)
                printf(" %d", arr[i]);
            printf("\n");
        }
    }
}