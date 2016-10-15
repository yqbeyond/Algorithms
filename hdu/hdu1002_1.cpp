/* Problem ID: 1002
 * Author: YQ_Beyond
 * Run ID: 10842618
 * Exe Time: 0MS
 * Exe Memory: 288K
 * Code Len: 1578 B
 * Language: C++
 */

//大数相加
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int length(char arr[]);//求每个数的长度
    int T;//输入T组测试用例
    cin>>T;
    for(int i=0;i<T;i++)
    {
        char A[1005]={'\0'},B[1005]={'\0'},SUM[1005]={'\0'};
        cin>>A;//输入第一个数
        cin>>B;//输入第二个数
        bool swaped=false;
        if(length(A)<length(B))// 出两个数中较长的一个
        {
            char Temp[1002];
            strcpy(Temp,A);
            strcpy(A,B);
            strcpy(B,Temp);
            swaped=true;
        }
        //以下是计算过程
        int temp=0,k=0;
        int j,t;
        for(j=length(A)-1,t=length(B)-1;t>=0;j--,t--)
        {
            SUM[k++]=(A[j]+B[t]-2*'0'+temp)%10+'0';
            temp=((A[j]-'0')+(B[t]-'0')+temp)/10;
        }
        while(j>=0)
        {
            SUM[k++]=(A[j]-'0'+temp)%10+'0';
            temp=((A[j]-'0')+temp)/10;
            j--;
        }
        SUM[k]=temp+'0';
        //以下是输出控制
        cout<<"Case "<<i+1<<':'<<endl;
        if (!swaped)
            cout<<A<<" + "<<B<<" = ";
        else
            cout<<B<<" + "<<A<<" = ";
        while(SUM[k]=='0' && k>0) k--;
        for(k;k>=0;k--)
            cout<<SUM[k];
//        else
//            for(;k>=0;k--)
//                cout<<SUM[k];
        cout<<endl;

        if (i<T-1) cout<<endl;
    }
    return 0;
}
int length(char arr[1005])//求每个数的长度
{
    int _length=0;
    for(int i=0;arr[i]!='\0';i++)
        _length++;
    return _length;
}
