/* Problem ID: 2160
 * Author: YQ_Beyond
 * Run ID: 10854350
 * Exe Time: 0MS
 * Exe Memory: 292K
 * Code Len: 301 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    int a[21];
    a[0]=0;
    a[1]=1;
    a[2]=2;
    for(int i=3;i<21;i++)
        a[i]=a[i-1]+a[i-2];
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        cout<<a[t]<<endl;
    }
    return 0;
}
