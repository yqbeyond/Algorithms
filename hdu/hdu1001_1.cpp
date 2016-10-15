/* Problem ID: 1001
 * Author: YQ_Beyond
 * Run ID: 10824578
 * Exe Time: 0MS
 * Exe Memory: 292K
 * Code Len: 227 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    int T;
    while(cin>>T)
    {
        int sum=0;
        for(int i=0;i<T;i++)
            sum+=(i+1);
        cout<<sum<<endl<<endl;
    }
    return 0;
}
