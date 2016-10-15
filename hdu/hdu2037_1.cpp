/* Problem ID: 2037
 * Author: YQ_Beyond
 * Run ID: 17623167
 * Exe Time: 0MS
 * Exe Memory: 1580K
 * Code Len: 791 B
 * Language: G++
 */

#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>


using namespace std;

typedef struct program{
    int s; // start
    int e; // end
}Program;

Program p[105];

int cmp(const void *a, const void *b)
{
    Program *p1, *p2;
    p1 = (Program *)a;
    p2 = (Program *)b;
    if (p1->e != p2->e)
        return p1->e - p2->e;
    else
        return p1->s - p2->s;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while (scanf("%d", &n), n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d%d", &p[i].s, &p[i].e);
        }
        qsort(p, n, sizeof(p[0]), cmp);
        int num = 1;
        int cur_e = p[0].e;
        for (int i = 1; i < n; i++)
        {
            if (p[i].s >= cur_e)
            {
                num++;
                cur_e = p[i].e;
            }            
        }
        printf("%d\n", num);
    }
    return 0;
}