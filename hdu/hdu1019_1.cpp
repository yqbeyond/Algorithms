/* Problem ID: 1019
 * Author: YQ_Beyond
 * Run ID: 11201187
 * Exe Time: 0MS
 * Exe Memory: 292K
 * Code Len: 427 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long n,t,result;
        cin>>n>>t;
        result=t;
        for(long long i=0;i<n-1;i++)
        {
            cin>>t;
            result=result*t/gcd(result,t);
        }
        cout<<result<<endl;
    }
    return 0;
}
