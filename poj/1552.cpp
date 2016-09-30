/* Problem ID: 1552
 * Author: 1307010418
 * Memory: 220K
 * Time: 0MS
 */

#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a < b;
}
int a[20];
int main()
{
    while(1)
    {
        int t;
        cin>>t;
        a[0]=t;
        if(a[0]==-1)
            break;
        int i;
        for(i=1;;i++)
        {
            cin>>t;
            if(t!=0)
                a[i]=t;
            else
            {
                a[i]=t;
                break;
            }
        }
        sort(a,a+i,cmp);
        //for(int i=0;a[i]!=0;i++)
            //cout<<a[i]<<&#39; &#39;;
        //cout<<endl;
        int counter=0;
        for(int i=0;a[i+1]!=0;i++)
        {
            for(int j=i+1;a[j]!=0;j++)
            {
                if(a[i]*2==a[j])
                    {counter++;break;}
            }
        }
        cout<<counter<<endl;
    }
}
