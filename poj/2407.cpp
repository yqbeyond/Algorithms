/* Problem ID: 2407
 * Author: 1307010418
 * Memory: 696K
 * Time: 16MS
 */

#include<iostream>
using namespace std;
int main()
{
    int i,N,ans,temp;
    while(cin>>N&&N!=0)
    {
        temp=N;
        for(i=2,ans=N;i*i<=N;i++)
        {
            if(N%i==0)
            {
                ans=ans*1-ans/i;
                do
                {
                    N/=i;
                }while(N%i==0);
            }
        }
        if(N!=1)
        ans=ans-ans/N;
        cout<<(temp==1?0:ans)<<endl;
    }
    return 0;
}
