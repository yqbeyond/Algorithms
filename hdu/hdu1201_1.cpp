/* Problem ID: 1201
 * Author: YQ_Beyond
 * Run ID: 10873810
 * Exe Time: 0MS
 * Exe Memory: 316K
 * Code Len: 1536 B
 * Language: C++
 */

#include<iostream>
#include<cstdio>
using namespace std;
bool leap(int year)
{
    return ((year%4==0&&year%100!=0)||year%400==0)?true:false;
}
int Plus(int year)
{
    int sum=0;
    int Month[2][24]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
    for(int i=year;i<year+17;i++)
        for(int j=0;j<12;j++)
            sum+=Month[leap(i)][j];
    return sum;
}
int main()
{
     int Month[2][24]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
     int T;
     cin>>T;
     while(T--)
     {
          int sum=0;
          int year, month, day;
          scanf("%d-%d-%d",&year,&month,&day);
          if(leap(year)&&month==2&&day==29&&leap(year+18)==false)
          { cout<<-1<<endl;continue;}
          else
          {
              switch(month)
              {
              case 1:
              case 3:
              case 5:
              case 7:
              case 8:
              case 10:
              case 12:sum+=31-day;break;
              case 4:
              case 6:
              case 9:
              case 11:sum+=30-day;break;
              case 2:sum+=leap(year)?29-day:28-day;break;
              }
              for(int i=month;i<12;i++)
                sum+=Month[leap(year)][i];
              sum+=Plus(year+1);
              for(int i=0;i<month-1;i++)
                sum+=Month[leap(year+18)][i];
              sum+=day;
          }
          cout<<sum<<endl;
     }
     return 0;
}
