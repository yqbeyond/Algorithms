/* Problem ID: 3006
 * Author: 1307010418
 * Memory: 216K
 * Time: 282MS
 */

#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int n)
{
    if(n==1)
        return false;
    bool ok=true;
    for(int i=2; i<=sqrt(double(n)); i++)
         if( n%i==0 )
            {ok=false;break;}
    return ok;
}
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==0&&b==0&&c==0)
            break;
        for(int i=0;i<c;i++)
        {
            if(isprime(a)==false)
                i--;
            a+=b;
        }
        cout<<a-b<<endl;
    }
    return 0;
}
