/* Problem ID: 2521
 * Author: YQ_Beyond
 * Run ID: 10845776
 * Exe Time: 31MS
 * Exe Memory: 288K
 * Code Len: 618 B
 * Language: C++
 */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int IsNprime(int x);
    int T;
    cin>>T;
    while(T--)
    {
        int a,b;
        cin>>a>>b;
        int Max=0;
        int Min_num=a;
        for(int i=a;i<=b;i++)
            if(Max<IsNprime(i))
            {
                Min_num=i;
                Max=IsNprime(i);
            }
        cout<<Min_num<<endl;
    }
    return 0;
}
int IsNprime(int x)
{
    int counter=0;
    for(int i=1;i<=int(sqrt(double(x)));i++)
        if(x%i==0&&i*i!=x)
           counter+=2;
        else if(x%i==0&&i*i==x)
           counter++;
    return counter;
}
