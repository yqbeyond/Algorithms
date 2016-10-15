/* Problem ID: 1097
 * Author: YQ_Beyond
 * Run ID: 10870552
 * Exe Time: 0MS
 * Exe Memory: 308K
 * Code Len: 588 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        a%=10;
        b%=4;
        //cout<<"a="<<a<<' '<<"b="<<b<<endl;
        int arr[4];
        int sum=a;
        arr[0]=a;
        for(int i=1;i<4;i++)
        {
            sum*=a;
            arr[i]=sum%10;
            sum%=10;
        }
        //for(int i=0;i<4;i++)
           //cout<<arr[i]<<' ';
        //cout<<endl;
        if(b==0)
            cout<<arr[3];
        else
            cout<<arr[b-1];
        cout<<endl;
    }
    return 0;
}
