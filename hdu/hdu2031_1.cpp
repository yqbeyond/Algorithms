/* Problem ID: 2031
 * Author: YQ_Beyond
 * Run ID: 17621929
 * Exe Time: 0MS
 * Exe Memory: 1580K
 * Code Len: 604 B
 * Language: G++
 */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;


int arr[100];

int main()
{
    int N, R;
    while (~scanf("%d%d", &N, &R))
    {
        if (N == 0)
        {
            printf("0\n");
            continue;
        }
        bool flag = false;
        if (N < 0)
        {
            N = -N;
            flag = true;
        }
        
        int i = 0;
        while (N != 0)
        {
            arr[i++] = N % R;
            N = N / R;
        }
        if(flag) printf("-");
        
        while (i--)
        {        
            if (arr[i] >=0 && arr[i] <= 9)
                printf("%d", arr[i]);
            else
                printf("%c", arr[i] - 10 + 'A');
        }
        printf("\n");
    }
    return 0;
}