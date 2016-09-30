/* Problem ID: 2017
 * Author: 1307010418
 * Memory: 232K
 * Time: 0MS
 */

#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==-1)
            break;
        int s,t1=0,t2;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>s>>t2;
            sum+=s*(t2-t1);
            t1=t2;
        }
        cout<<sum<<" miles"<<endl;
    }
    return 0;
}
