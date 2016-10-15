/* Problem ID: 1003
 * Author: YQ_Beyond
 * Run ID: 10916320
 * Exe Time: 328MS
 * Exe Memory: 732K
 * Code Len: 619 B
 * Language: G++
 */

#include<iostream>
using namespace std;
int a[100005];
int main()
{
    int T;
    cin>>T;
    for(int j=0;j<T;j++)
    {
        int N;
            int begin=1,end=1;
            int temp=0;
        cin>>N;
        for(int i = 0; i < N; i++)
            cin>>a[i];
                int sum=0,SUM=a[0];
        for(int i = 0; i < N; i++)
        {
            sum+=a[i];
            if(sum>SUM)
            {
                SUM=sum;
                begin=temp+1;
                end=i+1;
            }
            if(sum<0)
            {
                sum=0;
                temp=i+1;
            }
        }
        cout<<"Case "<<j+1<<':'<<endl;
                cout<<SUM<<' '<<begin<<' '<<end<<endl;
        if(j!=T-1)
            cout<<endl;
    }
    return 0;
}
