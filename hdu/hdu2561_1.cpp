/* Problem ID: 2561
 * Author: YQ_Beyond
 * Run ID: 10847770
 * Exe Time: 0MS
 * Exe Memory: 292K
 * Code Len: 635 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    void Sort(int a[1005],int Size);
    int N;
    cin>>N;
    while(N--)
    {
        int sum=0;
        int M;
        cin>>M;
        int a[105];
        for(int i=0;i<M;i++)
           cin>>a[i];
        Sort(a,M);
    }
    return 0;
}
void Sort(int a[1005],int Size)
{
    int temp;
    for(int i=0;i<Size-1;i++)
            for(int j=0;j<Size-i-1;j++)
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
    cout<<a[1]<<endl;
}
