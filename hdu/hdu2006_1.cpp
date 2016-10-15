/* Problem ID: 2006
 * Author: YQ_Beyond
 * Run ID: 10854803
 * Exe Time: 15MS
 * Exe Memory: 288K
 * Code Len: 309 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        int x;
        double sum=1;
        for(int i=0;i<t;i++)
        {
            cin>>x;
            if(x%2==1)
            sum*=x;
        }
        cout<<(long)sum<<endl;
    }
    return 0;
}
