/* Problem ID: 2520
 * Author: YQ_Beyond
 * Run ID: 10847718
 * Exe Time: 140MS
 * Exe Memory: 292K
 * Code Len: 320 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int sum=0;
        int M;
        cin>>M;
        for(int i=1;i<=M;i++)
        {
            sum+=(i*2-1)%10000;
            sum%=10000;
        }
        cout<<sum<<endl;
    }
    return 0;
}
