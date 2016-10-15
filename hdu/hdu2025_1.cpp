/* Problem ID: 2025
 * Author: YQ_Beyond
 * Run ID: 17617115
 * Exe Time: 15MS
 * Exe Memory: 1584K
 * Code Len: 492 B
 * Language: G++
 */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

int main()
{
    //freopen("in.txt", "r", stdin);
    char str[105];
    while (scanf("%s", str) != EOF)
    {
        char _max = str[0];
        for (int i = 1; i < strlen(str); i++)
        {
            if (str[i] > _max)
                _max = str[i];
        }
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == _max)
            {
                printf("%c(max)", str[i]);
            }
            else
            {
                printf("%c",str[i]);
            }
        }
        printf("\n");
    }
}