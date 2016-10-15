/* Problem ID: 2026
 * Author: YQ_Beyond
 * Run ID: 17617455
 * Exe Time: 15MS
 * Exe Memory: 1556K
 * Code Len: 429 B
 * Language: G++
 */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

int main()
{
    //freopen("in.txt", "r", stdin);
    char ch;
    bool space = true;
    while (1)
    {
        ch = getchar();
        if (ch == EOF)
            break;

        if (space)
        {
            printf("%c", ch - 'a' + 'A');
            space = false;
        }
        else
        {
            printf("%c", ch);
            if (ch == ' ' || ch == '\n')
            {
                space = true;
            }    
        }
    }
    return 0;
}