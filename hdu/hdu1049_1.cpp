/* Problem ID: 1049
 * Author: YQ_Beyond
 * Run ID: 11201925
 * Exe Time: 0MS
 * Exe Memory: 292K
 * Code Len: 423 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    int n,u,d;
    while(cin>>n>>u>>d)
    {
        if(n==0&&u==0&&d==0)
            break;
        int s=u-d;
        int sum=0;
        while(1)
        {
            if(sum/2*s+u>=n)
            {
                cout<<sum+1<<endl;
                break;
            }
            else
                sum+=2;
        }
    }
    return 0;
}
