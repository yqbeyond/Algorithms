/* Problem ID: 2388
 * Author: 1307010418
 * Memory: 252K
 * Time: 79MS
 */

#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a<b;
}
int main()
{
    int a[10005];
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
        cin>>a[i];
    sort(a,a+i,cmp);
    cout<<a[(t-1)/2];
    return 0;
}
