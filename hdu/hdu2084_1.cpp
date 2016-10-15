/* Problem ID: 2084
 * Author: YQ_Beyond
 * Run ID: 11364514
 * Exe Time: 468MS
 * Exe Memory: 408K
 * Code Len: 809 B
 * Language: G++
 */

#include<iostream>
#include<algorithm>
using namespace std;

int tower[101][101];
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int deep;
        cin>>deep;
        for(int i=0;i<deep;i++)
            for(int j=0;j<=i;j++)
                cin>>tower[i][j];
        /*for)(int i=0;i<deep;i++)
            for(int j=0;j<=i;j++)
                cout<<tower[i][j];*/
        for(int i=deep-2;i>=0;i--)
            for(int j=0;j<=i;j++)
               {
                  if(tower[i][j]+tower[i+1][j]>tower[i][j]+tower[i+1][j+1])
                     tower[i][j]+=tower[i+1][j];
                  else
                     tower[i][j]+=tower[i+1][j+1];
               }
               cout<<tower[0][0]<<endl;
        //if(T!=0)
          //  cout<<endl;
    }
}
