/* Problem ID: 1496
 * Author: YQ_Beyond
 * Run ID: 17591747
 * Exe Time: 218MS
 * Exe Memory: 9400K
 * Code Len: 793 B
 * Language: G++
 */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

int square[101];
int _hash[2000003];

int main()
{
    int a, b, c, d;
    for (int i = 1; i < 101; i++)
    {
        square[i] = i*i;
    }

    while (~scanf("%d%d%d%d", &a, &b, &c, &d))
    {
        int count = 0;
        if ((a > 0 && b > 0 && c > 0 && d > 0) || (a < 0 && b < 0 && c < 0 && d < 0))
        {
            printf("0\n");
            continue;
        }

        memset(_hash, 0, sizeof(_hash));
        for (int i = 1; i <= 100; i++)
        {
            for (int j = 1; j <= 100; j++)
            {
                _hash[a*square[i] + b*square[j] + 1000000] ++;
            }
        }
        for (int i = 1; i <= 100; i++)
        {
            for (int j = 1; j <= 100; j++)
            {
                count += _hash[-(c * square[i] + d * square[j]) + 1000000];
            }
        }
        printf("%d\n",count * 16);
    }
    return 0;
}