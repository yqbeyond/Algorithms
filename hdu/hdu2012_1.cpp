/* Problem ID: 2012
 * Author: YQ_Beyond
 * Run ID: 10854034
 * Exe Time: 0MS
 * Exe Memory: 284K
 * Code Len: 686 B
 * Language: C++
 */

#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int u)
{
if(u == 0 || u == 1) return false;
if(u == 2) return true;
if(u%2 == 0) return false;
for(int i=3; i <= (long)sqrt((double)u) ;i+=2)
if(u%i==0) return false;
return true;
}
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        if(x==0&&y==0)
            break;
        bool ok=true;
        for(int i=x;i<=y;i++)
        {
            if(is_prime(i*i+i+41)==false)
            {
                ok=false;
                break;
            }
        }
        if(ok)
            cout<<"OK"<<endl;
        else
            cout<<"Sorry"<<endl;
    }
    return 0;
}
