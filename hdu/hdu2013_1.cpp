/* Problem ID: 2013
 * Author: YQ_Beyond
 * Run ID: 11159426
 * Exe Time: 0MS
 * Exe Memory: 336K
 * Code Len: 226 B
 * Language: G++
 */

#include<iostream>
using namespace std;
int f(int x)
{
    if(x==1)
        return x;
    else
        return (f(x-1)+1)*2;
}
int main()
{
    int t;
    while(cin>>t)
        cout<<f(t)<<endl;
    return 0;
}
