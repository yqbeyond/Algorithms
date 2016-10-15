/* Problem ID: 1800
 * Author: YQ_Beyond
 * Run ID: 17597885
 * Exe Time: 592MS
 * Exe Memory: 1636K
 * Code Len: 514 B
 * Language: G++
 */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include<map>

using namespace std;

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        map<int,int> mp;
        int max=INT_MIN;
        int level;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&level);
            mp[level]++;
            if(mp[level]>max)
            {
                max=mp[level]; 
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
