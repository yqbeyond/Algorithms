/* Problem ID: 1407
 * Author: YQ_Beyond
 * Run ID: 10855492
 * Exe Time: 187MS
 * Exe Memory: 292K
 * Code Len: 617 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        bool Find=false;
        for(int i=1;i*i*3<=t;i++)
        {
            for(int j=1;j*j*2<=t;j++)
            {
                for(int k=1;k*k<=t;k++)
                   if(i*i+j*j+k*k==t)
                   {
                       cout<<i<<' '<<j<<' '<<k<<endl;
                       Find=true;
                       break;
                   }
                if(Find)
                    break;
            }
            if(Find)
                break;
        }
    }
    return 0;
}
