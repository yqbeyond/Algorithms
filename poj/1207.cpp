/* Problem ID: 1207
 * Author: 1307010418
 * Memory: 216K
 * Time: 16MS
 */

#include<iostream>
using namespace std;
int f(int n)
{
    int sum=1;
    while(n!=1)
    {
        n=(n%2!=0)?3*n+1:n/2;
        sum++;
    }
    return sum;
}
int main()
{
    int i,j;
    while(cin>>i>>j)
    {
        bool changed=false;
        if(i>j)
        {
            changed=true;
            int temp=i;
            i=j;
            j=temp;
        }
        int Max=0;
        for(int temp=i;temp<=j;temp++)
            if(Max<f(temp))
            {Max=f(temp);}
        if(changed)
            cout<<j<<&#39; &#39;<<i<<&#39; &#39;<<Max<<endl;
        else
            cout<<i<<&#39; &#39;<<j<<&#39; &#39;<<Max<<endl;
    }
    return 0;
}
