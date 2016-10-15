/* Problem ID: 2046
 * Author: YQ_Beyond
 * Run ID: 11332008
 * Exe Time: 0MS
 * Exe Memory: 348K
 * Code Len: 237 B
 * Language: G++
 */

#include<iostream>
using namespace std;
int main()
{
    long long f[50];
    f[0]=1;
    f[1]=2;
    for(int i=2;i<=50;i++)
       f[i]=f[i-1]+f[i-2];
    int t;
    while(cin>>t)
        cout<<f[t-1]<<endl;
    return 0;
}