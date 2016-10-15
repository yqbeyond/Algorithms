/* Problem ID: 1108
 * Author: YQ_Beyond
 * Run ID: 11194381
 * Exe Time: 15MS
 * Exe Memory: 292K
 * Code Len: 307 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int gcd(int m,int n)
{
    if(m<n)
    {
        int temp =m;m=n;n=temp;
    }
    if(m%n==0)
        return n;
    else
        return gcd(n,m%n);
}
int main()
{
    int m,n;
    while(cin>>m>>n)
        cout<<m*n/gcd(m,n)<<endl;
    return 0;
}
