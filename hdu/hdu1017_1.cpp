/* Problem ID: 1017
 * Author: YQ_Beyond
 * Run ID: 10843073
 * Exe Time: 93MS
 * Exe Memory: 292K
 * Code Len: 477 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    int N;
    int n,m;
    int counter,sign;
    cin>>N;
    char ch;
    cin.get(ch);
    for(int i=0;i<N;i++)
    {
        sign=1;
        while(cin>>n>>m)
        {
            if(n==0&&m==0)
                break;
            counter=0;
            for(int a=1;a<n-1;a++)
                for(int b=a+1;b<n;b++)
                    if((a*a+b*b+m)%(a*b)==0)
                        counter++;
            cout<<"Case "<<sign++<<": "<<counter<<endl;
        }
            if(i!=N-1)
                cout<<endl;
    }
    return 0;
}
