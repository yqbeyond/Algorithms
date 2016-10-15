/* Problem ID: 2212
 * Author: YQ_Beyond
 * Run ID: 10850440
 * Exe Time: 62MS
 * Exe Memory: 272K
 * Code Len: 457 B
 * Language: C++
 */

#include<iostream>
using namespace std;
double f(int a)
{
    double sum=1;
    for(int i=1;i<=a;i++)
        sum*=i;
    return sum;
}
int main()
{
    for(int k=1;k<=409113;k++)
    {
       int a[6];
       int j,i;
       for(j=0,i=k;i>=1;j++,i/=10)
           a[j]=i%10;
       double sum=0;
       for(int i=j-1;i>=0;i--)
           sum+=f(a[i]);
        if((long long)sum==k)
            cout<<k<<endl;
    }
    return 0;
}
