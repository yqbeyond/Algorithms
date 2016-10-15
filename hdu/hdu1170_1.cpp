/* Problem ID: 1170
 * Author: YQ_Beyond
 * Run ID: 11142423
 * Exe Time: 15MS
 * Exe Memory: 328K
 * Code Len: 578 B
 * Language: C++
 */

#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char ch;
        long long a,b;
        cin>>ch>>a>>b;
        switch (ch)
        {
        case '+':
            cout<<a+b<<endl;break;
        case '-':
            cout<<a-b<<endl;break;
        case '*':
            cout<<a*b<<endl;break;
        case '/':
            if(a%b==0)
            {cout<<a/b<<endl;break;}
            else
                {printf("%.2f\n",(double)a/b);break;}
        }
    }
    return 0;
}

