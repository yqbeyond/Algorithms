/* Problem ID: 1466
 * Author: YQ_Beyond
 * Run ID: 11364268
 * Exe Time: 0MS
 * Exe Memory: 388K
 * Code Len: 647 B
 * Language: G++
 */

#include<iostream>
using namespace std;

int main()
{
    int n,result[21][200];
    for(int i=1;i<=20;i++)
        for(int j=0;j<=200;j++)
            result[i][j]=0;

    result[0][0]=1;
    result[1][0]=1;
    result[2][0]=1;
    result[2][1]=1;

    for(int i=3;i<=20;i++)
        for(int j=0;j<i;j++)
            for(int k=0;k<=(j-1)*j/2;k++)
                if(result[j][k]==1)
                    result[i][k+j*(i-j)]=1;

     while(cin>>n)
     {
        cout<<0;
        for(int i=1;i<=(n-1)*n/2;i++)
            if(result[n][i]==1)
                cout<<' '<<i;
        cout<<endl;
     }
     return 0;
}
