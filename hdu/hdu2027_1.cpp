/* Problem ID: 2027
 * Author: YQ_Beyond
 * Run ID: 17617841
 * Exe Time: 0MS
 * Exe Memory: 1588K
 * Code Len: 709 B
 * Language: G++
 */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    cin>>n;
    int tmp = 0;
    char ch = getchar();
    while (n--)
    {
        int ans[5] = {0, 0, 0, 0, 0};
        if (tmp != 0)
            cout<<endl;
        else
            tmp++;
        while (ch = getchar())
        {
            if (ch != '\n')
            {
                if (ch == 'a')
                    ans[0]++;
                else if (ch == 'e')
                    ans[1]++;
                else if (ch == 'i')
                    ans[2]++;
                else if (ch == 'o')
                    ans[3]++;
                else if (ch == 'u')
                    ans[4]++;
            }
            else
            {
                printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", ans[0], ans[1], ans[2], ans[3], ans[4]);
                break;
            }
        }
    }
}