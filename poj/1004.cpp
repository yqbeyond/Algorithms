/* Problem ID: 1004
 * Author: 1307010418
 * Memory: 236K
 * Time: 0MS
 */

#include<iostream>
using namespace std;
int main()
{
    double a,sum=0;
    int i=12;
    while(i--)
    {
        cin>>a;
        sum+=a;
    }
    cout<<&#39;$&#39;<<sum/12;
}
