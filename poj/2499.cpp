/* Problem ID: 2499
 * Author: 1307010418
 * Memory: 216K
 * Time: 16MS
 */

#include <iostream>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b,left,right;
        left=right=0;
        cin>>a>>b;
        while(a!=1||b!=1)
        {
            if(a>b)
            {
                temp=(a-1)/b;
                left+=temp;
                a-=temp*b;
            }
            else
            {
                temp=(b-1)/a;
                right+=temp;
                b-=temp*a;
            }
        }
        cout<<"Scenario #"<<i<<&#39;:&#39;<<endl;
        cout<<left<<&#39; &#39;<<right<<endl;
        if(i<n)
        cout<<endl;
    }
    return 0;
}
