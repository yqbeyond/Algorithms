/* Problem ID: 2016
 * Author: YQ_Beyond
 * Run ID: 17613769
 * Exe Time: 0MS
 * Exe Memory: 1576K
 * Code Len: 535 B
 * Language: G++
 */

#include <iostream>
#include <cstdio>

using namespace std;

int arr[105];

int main()
{
    int n;
    while(scanf("%d", &n))
    {
        if (n == 0) break;
        int _min = 0x7fffffff;
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] < _min)
            {
                index = i;
                _min = arr[i];
            }
        }
        int tmp = arr[index];
        arr[index] = arr[0];
        arr[0] = tmp;

        printf("%d", arr[0]);
        for (int i = 1; i < n; i++)
        {
            printf(" %d", arr[i]);
        }
        printf("\n");
    }
    return 0;
}