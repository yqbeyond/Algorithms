/* Problem ID: 1040
 * Author: YQ_Beyond
 * Run ID: 10844754
 * Exe Time: 0MS
 * Exe Memory: 296K
 * Code Len: 582 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int a[1001];
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        int temp;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n-1;i++)
            for(int j=0;j<n-i-1;j++)
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
        for(int i=0;i<n-1;i++)
            cout<<a[i]<<' ';
        cout<<a[n-1]<<endl;
    }
    return 0;
}
