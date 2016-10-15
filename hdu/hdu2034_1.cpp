/* Problem ID: 2034
 * Author: YQ_Beyond
 * Run ID: 10856549
 * Exe Time: 0MS
 * Exe Memory: 292K
 * Code Len: 2267 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int A[105],B[105],C[105],D[105];
int main()
{
    void Sort( int *a,int Size);
    int n,m;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;
        for(int i=0;i<n;i++)
            cin>>A[i];
        for(int i=0;i<m;i++)
            cin>>B[i];
        if(n==0)
        {
            cout<<"NULL"<<endl;
            continue;
        }
        /*cout<<"排序前：\n";
        cout<<"A: ";
        for(int i=0;i<n;i++)
            cout<<A[i]<<' ';
        cout<<endl<<"B: ";
        for(int i=0;i<m;i++)
            cout<<B[i]<<' ';
        cout<<endl;*/
        Sort(A,n);
        Sort(B,m);
        /*cout<<"排序后：\n";
        cout<<"A: ";
        for(int i=0;i<n;i++)
            cout<<A[i]<<' ';
        cout<<endl<<"B: ";
        for(int i=0;i<m;i++)
            cout<<B[i]<<' ';
        cout<<endl;*/
        int k1=1;
        C[0]=A[0];
        for(int i=1;i<n;i++)
            if(A[i]!=A[i-1])
                C[k1++]=A[i];
        if(m==0)
        {
            for(int i=0;i<k1;i++)
                cout<<A[i]<<' ';
            cout<<endl;
            continue;
        }
        int k2=1;
        D[0]=B[0];
        for(int i=1;i<m;i++)
            if(B[i]!=B[i-1])
                D[k2++]=B[i];
        /*cout<<"C: ";
        for(int i=0;i<k1;i++)
            cout<<C[i]<<' ';
        cout<<endl<<"D: ";
        for(int i=0;i<k2;i++)
            cout<<D[i]<<' ';
        cout<<endl;*/
       int sign=0;
       for(int i=0;i<k1;i++)
        {
           bool Sign=true;
           for(int j=0;j<k2;j++)
              if(C[i]==D[j])
              {
                  Sign=false;
                  sign++;
                  break;
              }
           if(Sign)
                cout<<C[i]<<' ';
       }
       if(sign==k1)
           cout<<"NULL"<<endl;
       else
           cout<<endl;
    }
    return 0;
}
void Sort( int *a,int Size)
{
    long int temp;
    for(int i=0;i<Size-1;i++)
            for(int j=0;j<Size-i-1;j++)
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
}
