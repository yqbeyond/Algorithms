/* Problem ID: 2502
 * Author: YQ_Beyond
 * Run ID: 10854593
 * Exe Time: 15MS
 * Exe Memory: 292K
 * Code Len: 514 B
 * Language: C++
 */

#include<iostream>
#include<cmath>
using namespace std;
double f(int x)
{
    double sum=1;
    for(int i=1;i<=x;i++)
        sum*=i;
    return sum;
}
int c(int n,int k)
{
    int sum;
    sum=f(n)/(f(k)*f(n-k));
    return sum;
}
int main()
{
    int  T;
    cin>>T;
    while(T--)
    {
        int sum=0;
        int t;
        cin>>t;
        for(int i=1;i<=t-1;i++)
            sum+=c(t-1,i)*i;
        sum+=pow(2,t)-pow(2,t-1);
        cout<<sum<<endl;
    }
    return 0;
}
