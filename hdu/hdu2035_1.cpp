/* Problem ID: 2035
 * Author: YQ_Beyond
 * Run ID: 10854874
 * Exe Time: 0MS
 * Exe Memory: 288K
 * Code Len: 307 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    long long x,y;
    while(cin>>x>>y)
    {
        if(x==0&&y==0)
            break;
        long long sum=1;
        for(int i=1;i<=y;i++)
        {
            sum*=x;
            sum%=1000;
        }
        cout<<sum<<endl;
    }
    return 0;
}
