/* Problem ID: 2085
 * Author: YQ_Beyond
 * Run ID: 12101654
 * Exe Time: 109MS
 * Exe Memory: 352K
 * Code Len: 327 B
 * Language: G++
 */

#include<iostream>
using namespace std;

__int64 j[33][33];
int main()
{

    int n;
    while(cin>>n)
    {
        if(n==-1)
            break;
        j[0][0]=1;
        j[0][1]=0;
        int i;
        for(i=1;i<=n;i++)
        {
            j[i][0]=(j[i-1][0]*3)+(j[i-1][1]*2);
            j[i][1]=j[i-1][1]+j[i-1][0];
        }
        cout<<j[i-1][0]<<", "<<j[i-1][1]<<endl;
    }
}
