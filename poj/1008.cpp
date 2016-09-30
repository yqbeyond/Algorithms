/* Problem ID: 1008
 * Author: 1307010418
 * Memory: 224K
 * Time: 16MS
 */

#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
#include<string>
using namespace std;
char haab_month[19][10]={"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu","uayet"};
char Holly_day[20][10]={"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
int getMonth(char month[])
{
    for(int i=0;i<19;i++)
        if(strcmp(month,haab_month[i])==0)
        {
            return i+1;
            break;
        }
}
int main()
{
    int T;
    cin>>T;
    cout<<T<<endl;
    for(int i=0;i<T;i++)
    {
        int day;
        char dot;
        char month[10];
        int year;
        cin>>day>>dot>>month>>year;
        int number;
        char mark[10];
        int Year;
        int days=year*365+(getMonth(month)-1)*20+day+1;
        Year=days/260;
        number=days%260%13;
        if(number==0)
            number=13;
        strcpy(mark,Holly_day[days%260%20-1]);
        if(days%260%20==0)
            strcpy(mark,Holly_day[19]);
        if(days%260%20==0&&number==13)
            --Year;
        if(i!=T-1)
            cout<<number<<&#39; &#39;<<mark<<&#39; &#39;<<Year<<endl;
        else
            cout<<number<<&#39; &#39;<<mark<<&#39; &#39;<<Year;
    }
    return 0;
}
