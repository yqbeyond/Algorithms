/* Problem ID: 2519
 * Author: YQ_Beyond
 * Run ID: 10848160
 * Exe Time: 0MS
 * Exe Memory: 292K
 * Code Len: 443 B
 * Language: C++
 */

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double f(int x);
    //cout<<f(30)<<endl;
    int T;
    cin>>T;
    while(T--)
    {
       long long int N,M;
       cin>>N>>M;
       if(N<M)
       cout<<0<<endl;
       else
       printf("%.0lf\n",f(N)/(f(M)*f(N-M)));
    }
    return 0;
}
double f(int x)
{
    double sum=1;
    for(int i=1;i<=x;i++)
        sum*=i;
    return sum;
}
