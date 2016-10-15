/* Problem ID: 1014
 * Author: YQ_Beyond
 * Run ID: 11199968
 * Exe Time: 0MS
 * Exe Memory: 284K
 * Code Len: 467 B
 * Language: C++
 */

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int step,mod;
    while(cin>>step>>mod)
    {
        int seed=0,i;
        for(i=0;i<mod;i++)
        {
            seed=(seed+step)%mod;
            if(seed==0)
                break;
        }
        if(i==mod-1)
            printf("%10d%10d    Good Choice\n\n",step,mod);
        else
            printf("%10d%10d    Bad Choice\n\n",step,mod);
    }
    return 0;
}
