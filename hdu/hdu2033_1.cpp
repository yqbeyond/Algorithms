/* Problem ID: 2033
 * Author: YQ_Beyond
 * Run ID: 10846297
 * Exe Time: 0MS
 * Exe Memory: 292K
 * Code Len: 589 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    int N;
    int H1,M1,S1,H2,M2,S2;
    cin>>N;
    while(N--)
    {
        int H=0,M=0,S=0;
        cin>>H1>>M1>>S1>>H2>>M2>>S2;
        if(S+S1+S2>=60)
        {
            M+=1;
            S=(S+S1+S2)%60;
        }
        else
        {
            S+=S1+S2;
        }
        if(M+M1+M2>=60)
        {
            H+=1;
            M=(M+M1+M2)%60;
        }
        else
        {
            M+=M1+M2;
        }
        H+=H1+H2;
        cout<<H<<' '<<M<<' '<<S<<endl;
    }
    return 0;
}
