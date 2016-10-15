/* Problem ID: 1092
 * Author: YQ_Beyond
 * Run ID: 10907937
 * Exe Time: 0MS
 * Exe Memory: 292K
 * Code Len: 279 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t&&t)
    {
        int sum=0;
        int x;
        for(int i=0;i<t;i++)
        {
            cin>>x;
            sum+=x;
        }
        cout<<sum<<endl;
    }
    return 0;
}
