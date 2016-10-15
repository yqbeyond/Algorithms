/* Problem ID: 2503
 * Author: YQ_Beyond
 * Run ID: 10848062
 * Exe Time: 703MS
 * Exe Memory: 292K
 * Code Len: 696 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int f;
        bool waped1=false;
        if(b>d)
        {int temp;temp=b;b=d;d=temp;waped1=true;}
        for(int i=b;i>=1;i--)
        if(b%i==0&&d%i==0)
        {f=b*d/i;break;}
        int e=waped1?a*f/d+c*f/b:a*f/b+c*f/d;
        int big;
        bool waped2=false;
        if(e>f)
        {int temp;temp=e;e=f;f=temp;waped2=true;}
        for(int i=e;i>=1;i--)
        if(e%i==0&&f%i==0)
        {big=i;break;}
        waped2?cout<<f/big<<' '<<e/big<<endl:cout<<e/big<<' '<<f/big<<endl;
    }
    return 0;
}
