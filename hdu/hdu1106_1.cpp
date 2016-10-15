/* Problem ID: 1106
 * Author: YQ_Beyond
 * Run ID: 10855344
 * Exe Time: 0MS
 * Exe Memory: 284K
 * Code Len: 1997 B
 * Language: C++
 */

#include<iostream>
#include<cstdlib>
//#include<fstream>
using namespace std;
//ifstream fin("test.txt");
char Char_a[1005];
long long int Int_b[1005];
int main()
{
    void Sort(long long int a[1005],int Size);
    while(cin>>Char_a)
    {
        int p=0;
        int Size=0;
        int number_begin,number_end;
        for(int i=0;Char_a[i]!='\0';i++)
            if(Char_a[i]!='5')
            {
                number_begin=i;
                break;
            }
        for(int i=number_begin;Char_a[i]!='\0';++i)
            if(Char_a[i]=='5')
            {
                if(Char_a[p]=='\0')
                    break;
                number_end=i-1;
                int k=0;
                char Char_b[11]={'\0'};
                for(int j=number_begin;j<=number_end;j++)
                    Char_b[k++]=Char_a[j];
                Int_b[Size++]=(long long)atoi(Char_b);
                for(p=i+1;Char_a[p]!='\0';p++)
                if(Char_a[p]!='5')
                {
                    i=number_begin=p;
                    break;
                }
            }
        //cout<<"p="<<p<<endl<<"Char[p]="<<Char_a[p]<<endl;
        if(Char_a[p])
        {
        int k=0;
        char Char_b[11]={'\0'};
        for(int j=number_begin;Char_a[j]!='\0';j++)
            Char_b[k++]=Char_a[j];
        if(Char_a[number_begin]!='\0')
            Int_b[Size++]=(long long)atoi(Char_b);
        }
        Sort(Int_b,Size);
    }
    return 0;
}
void Sort(long long int a[1005],int Size)
{
    long long int temp;
    for(int i=0;i<Size-1;i++)
            for(int j=0;j<Size-i-1;j++)
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
    if(Size==1)
        cout<<a[Size-1]<<endl;
    else
    {
        for(int i=0;i<Size-1;i++)
           cout<<a[i]<<' ';
        cout<<a[Size-1]<<endl;
    }
}

