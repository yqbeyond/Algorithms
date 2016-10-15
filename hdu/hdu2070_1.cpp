/* Problem ID: 2070
 * Author: YQ_Beyond
 * Run ID: 11921115
 * Exe Time: 62MS
 * Exe Memory: 292K
 * Code Len: 403 B
 * Language: C++
 */

#include<climits>
#include<iostream>
#include<cfloat>
#include<string>

#define BigInt __int64
#define Length 88

using namespace std;
string base="T.T^__^";

int main()
{
    BigInt f[60]={0,1,1};
    int n;

    while(cin>>n&&n!=-1)
    {
        for(int i=3;i<=n;i++)
        {
            f[i]=f[i-1]+f[i-2];
        }

        cout<<f[n]<<endl;
    }

    return 0;
}

