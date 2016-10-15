/* Problem ID: 2156
 * Author: YQ_Beyond
 * Run ID: 10854285
 * Exe Time: 281MS
 * Exe Memory: 292K
 * Code Len: 336 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
       double sum=0.0;
       for(int i=1;i<n;i++)
          sum+=double(1)/(i+1)*(n-i)*2;
       sum+=n;
       cout.setf(ios::fixed);
       cout.precision(2);
       cout<<sum<<endl;
    }
}
