/* Problem ID: 2149
 * Author: YQ_Beyond
 * Run ID: 10871742
 * Exe Time: 15MS
 * Exe Memory: 312K
 * Code Len: 478 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int score[1005];
int main()
{
    int M,N;
    while(cin>>M>>N)
    {
        if(M<=N)
        {
            cout<<M;
            for(int i=M+1;i<=N;i++)
                cout<<' '<<i;
            cout<<endl;
            continue;
        }
        else
        {
            if(M%(N+1)==0)
                cout<<"none"<<endl;
            else
                cout<<M%(N+1)<<endl;
        }
    }
    return 0;
}
