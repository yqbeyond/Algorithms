/* Problem ID: 1005
 * Author: YQ_Beyond
 * Run ID: 10842894
 * Exe Time: 46MS
 * Exe Memory: 292K
 * Code Len: 360 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int f(int A,int B,int n)
{
    if(n==1||n==2)
        return 1;
    else
        return (A*f(A,B,n-1)+B*f(A,B,n-2))%7;
}
int main()
{
    int A,B,n;
    while(cin>>A>>B>>n)
    {
        if(A==0&&B==0&&n==0)
            break;
        else
            cout<<f(A,B,n%49)<<endl;
    }
    return 0;
}
