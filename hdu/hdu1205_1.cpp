/* Problem ID: 1205
 * Author: YQ_Beyond
 * Run ID: 11146516
 * Exe Time: 656MS
 * Exe Memory: 320K
 * Code Len: 496 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    long T;
    cin>>T;
    while(T--)
    {
        long N;
        long temp;
        long long Sum=0;
        long  Max=0;
        cin>>N;
        while(N--)
        {
            cin>>temp;
            Sum+=temp;
            if(Max<temp)
                Max=temp;
        }
        Sum-=Max;
        if(Sum+1>=Max)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
