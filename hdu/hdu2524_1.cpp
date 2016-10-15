/* Problem ID: 2524
 * Author: YQ_Beyond
 * Run ID: 10845576
 * Exe Time: 0MS
 * Exe Memory: 292K
 * Code Len: 204 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    long long sum;
    int T;
    cin>>T;
    while(T--)
    {
        int m,n;
        cin>>m>>n;
        sum=n*(n+1)*m*(m+1)/4;
        cout<<sum<<endl;
    }
    return 0;
}
