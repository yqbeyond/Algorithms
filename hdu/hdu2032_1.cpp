/* Problem ID: 2032
 * Author: YQ_Beyond
 * Run ID: 10846208
 * Exe Time: 0MS
 * Exe Memory: 296K
 * Code Len: 503 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int a[30][30];
int main()
{
    for(int i=0;i<30;i++)
        a[i][0]=a[i][i]=1;
    int n;
    while(cin>>n)
    {
        for(int i=2;i<n;i++)
            for(int j=1;j<i;j++)
                a[i][j]=a[i-1][j-1]+a[i-1][j];
        for(int i=0;i<n;i++)
            for(int j=0;j<=i;j++)
            if(j<i)
                cout<<a[i][j]<<' ';
            else
                cout<<a[i][j]<<endl;
        cout<<endl;
    }
    return 0;
}
