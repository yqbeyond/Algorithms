/* Problem ID: 2011
 * Author: YQ_Beyond
 * Run ID: 17612590
 * Exe Time: 0MS
 * Exe Memory: 1568K
 * Code Len: 308 B
 * Language: G++
 */

#include <iostream>
using namespace std;
int main()
{
    int N, tmp;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d", &tmp);
        float sum = 0;
        for (int i = 1 ; i <= tmp; i++)
        {
            if (i % 2 == 0)
                sum -= 1.0 / i;
            else
                sum += 1.0 / i;
        }
        printf("%.2f\n", sum);
    }
    return 0;
}