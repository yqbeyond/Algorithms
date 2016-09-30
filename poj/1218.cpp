/* Problem ID: 1218
 * Author: 1307010418
 * Memory: 236K
 * Time: 16MS
 */

#include<iostream>
using namespace std;
bool posion[1005];
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        for(int i=0;i<1005;i++)
        {
            posion[i]=true;
        }
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j+=i)
                posion[j]=!posion[j];
        }
        int counter=0;
        for(int i=1;i<=n;i++)
            if(posion[i]==false)
                ++counter;
        cout<<counter<<endl;
    }
}
