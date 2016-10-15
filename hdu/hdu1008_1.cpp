/* Problem ID: 1008
 * Author: YQ_Beyond
 * Run ID: 11158732
 * Exe Time: 0MS
 * Exe Memory: 336K
 * Code Len: 442 B
 * Language: G++
 */

#include<iostream>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        if(N==0)
            break;
        int sum=0;
        int t,temp=0;
        while(N--)
        {
            cin>>t;
            if(t>temp)
                sum+=((t-temp)*6);
            else if(t<temp)
                sum+=((temp-t)*4);
            sum+=5;
            temp=t;
        }
        cout<<sum<<endl;
    }
}
