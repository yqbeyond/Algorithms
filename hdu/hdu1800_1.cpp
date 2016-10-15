/* Problem ID: 1800
 * Author: YQ_Beyond
 * Run ID: 17601273
 * Exe Time: 358MS
 * Exe Memory: 1584K
 * Code Len: 1013 B
 * Language: G++
 */

#include <iostream>
#include <limits.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <stdio.h>

using namespace std;

int N;
int Hash[3005];
char str[35];
int BKDRHash(char* s)
{
    long long seed = 131;
    long long _hash = 0;
    while (*s == '0') s++;
    while(*s)
    {
        _hash = _hash * seed + (*s++);
    }
    return (_hash & 0x7fffffff);
}

int cmp(const void* a, const void* b)
{
    return *(int*)b - *(int*)a;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int i, ans;
    while(scanf("%d", &N) != EOF)
    {
        i = 0;
        ans = 1;
        for (int i = 0; i < N; i++)
        {
            scanf("%s", str);
            Hash[i] = BKDRHash(str);
        }
        qsort(Hash, N, sizeof(Hash[0]), cmp);

    //    for (int i = 0; i < N; i++)
    //    {
    //        printf("%d ", Hash[i]);
    //    }printf("\n");

        int tmp = 1;
        for (i = 1; i < N; i++)
        {
            if (Hash[i] == Hash[i-1])
            {
                tmp ++;
                if (tmp > ans)
                    ans = tmp;
            }
            else
            {
                tmp = 1;
            }
        }
        printf("%d\n", ans);
    }
}