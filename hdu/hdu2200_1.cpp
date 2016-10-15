/* Problem ID: 2200
 * Author: YQ_Beyond
 * Run ID: 10850244
 * Exe Time: 0MS
 * Exe Memory: 284K
 * Code Len: 392 B
 * Language: C++
 */

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double f(int n);
    int t;
    while(cin>>t)
    {
        double S=0;
        for(int i=1;i<t;i++)
            S+=(t-i)*f(t)/(f(i-1)*f(t-i+1));
        printf("%.0lf\n",S);
    }
    return 0;
}
double f(int n)
{
    double sum=1.0;
    for(int i=1;i<=n;i++)
        sum*=i;
    return sum;
}
