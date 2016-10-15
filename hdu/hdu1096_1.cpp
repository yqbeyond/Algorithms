/* Problem ID: 1096
 * Author: YQ_Beyond
 * Run ID: 10876587
 * Exe Time: 0MS
 * Exe Memory: 312K
 * Code Len: 374 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int M,x;
        cin>>M;
        int sum=0;
        for(int i=0;i<M;i++)
        {
            cin>>x;
            sum+=x;
        }
        if(T)
            cout<<sum<<endl<<endl;
        else
            cout<<sum<<endl;
    }
    return 0;
}
