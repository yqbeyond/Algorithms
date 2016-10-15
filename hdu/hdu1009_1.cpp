/* Problem ID: 1009
 * Author: YQ_Beyond
 * Run ID: 11094160
 * Exe Time: 203MS
 * Exe Memory: 304K
 * Code Len: 1291 B
 * Language: C++
 */

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int M,N;
    while(cin>>M>>N)
    {
        if((M==-1)&&(N==-1))
            break;
        int J[1005],F[1005];
        double temp[1005];
        for(int i=0;i<N;i++)
        {
            cin>>J[i]>>F[i];
            temp[i]=double(J[i])/double(F[i]);
        }
        for(int i=0;i<N-1;i++)
        {
            for(int j=0;j<N-1-i;j++)
            {
                double t;
                int te;
                if(temp[j]>temp[j+1])
                {
                    t=temp[j];
                    temp[j]=temp[j+1];
                    temp[j+1]=t;
                    te=J[j];
                    J[j]=J[j+1];
                    J[j+1]=te;
                    te=F[j];
                    F[j]=F[j+1];
                    F[j+1]=te;
                }
            }
        }
        double sum=0;
        for(int i=N-1;i>=0;i--)
        {
            if(M>=F[i])
            {
                sum+=J[i];
                M-=F[i];
            }
            else
            {
                sum+=M*temp[i];
                break;
            }
        }
        cout<<setiosflags(ios::fixed)<<setprecision(3)<<sum<<endl;
    }
    return 0;
}
