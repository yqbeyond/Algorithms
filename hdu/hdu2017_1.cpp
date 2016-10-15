/* Problem ID: 2017
 * Author: YQ_Beyond
 * Run ID: 17613831
 * Exe Time: 0MS
 * Exe Memory: 1580K
 * Code Len: 373 B
 * Language: G++
 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch;
    ch = getchar();
    for (int i = 0; i < n; i++)
    {
        int _count = 0;
        while (ch = getchar())
        {
            if (ch == '\n' || ch == '\0')            
            {
                break;
            }
            else
            {
                if (ch >= '0' && ch <= '9')
                {
                    _count ++;
                }
            }
        }
        printf("%d\n", _count);
    }
}