/* Problem ID: 2018
 * Author: YQ_Beyond
 * Run ID: 11921056
 * Exe Time: 0MS
 * Exe Memory: 292K
 * Code Len: 409 B
 * Language: C++
 */

#include<climits>
#include<iostream>
#include<cfloat>
#include<string>

#define LL long long
#define Length 88

using namespace std;
string base="T.T^__^";

int main()
{
    LL sum[60]={1,2,3,4};
    int n;

    while(cin>>n&&n!=0)
    {
        for(int i=4;i<n;i++)
        {
            sum[i]=sum[i-3]+sum[i-1];
        }

        cout<<sum[n-1]<<endl;
    }

    return 0;
}

