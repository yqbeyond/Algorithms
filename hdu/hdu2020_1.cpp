/* Problem ID: 2020
 * Author: YQ_Beyond
 * Run ID: 17614147
 * Exe Time: 0MS
 * Exe Memory: 1604K
 * Code Len: 467 B
 * Language: G++
 */

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int cmp (int a, int b)
{
    return abs(a) > abs(b);
}
int arr[105];

int main()
{
    int n;
    while (cin>>n)
    {
        if (n == 0) break;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n, cmp);
        printf("%d", arr[0]);
        for (int i = 1; i < n; i++)
        {
            printf(" %d", arr[i]);
        }
        printf("\n");
    }
}