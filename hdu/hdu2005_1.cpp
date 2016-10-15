/* Problem ID: 2005
 * Author: YQ_Beyond
 * Run ID: 10846087
 * Exe Time: 15MS
 * Exe Memory: 280K
 * Code Len: 1111 B
 * Language: C++
 */

#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    int i;
    int month[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
    char date[20];
    while(cin>>date)
    {
        int k=0;
        char Year[5]={'\0'};
        for(i=0;date[i]!='/';i++)
            Year[k++]=date[i];
        //cout<<"Year="<<atoi(Year)<<endl;
        k=0;
        //cout<<i<<endl;
        char Month[3]={'\0'};
        for(++i;date[i]!='/';i++)
            Month[k++]=date[i];
        //cout<<"Month="<<atoi(Month)<<endl;
        k=0;
        //cout<<i<<endl;
        char Day[3]={'\0'};
        for(++i;date[i]!='\0';i++)
            Day[k++]=date[i];
        //cout<<"Day="<<atoi(Day)<<endl;
       // cout<<"today is "<<Year<<"/"<<Month<<"/"<<Day<<endl;
        bool leap=((atoi(Year)%4==0&&atoi(Year)%100!=0)||(atoi(Year)%400==0));
        int num=0;
        for(int i=0;i<atoi(Month)-1;i++)
            num+=month[leap][i];
        for(int i=0;i<atoi(Day);i++)
            num++;
        cout<<num<<endl;
    }
}
