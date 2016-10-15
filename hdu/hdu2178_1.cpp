/* Problem ID: 2178
 * Author: YQ_Beyond
 * Run ID: 10916495
 * Exe Time: 0MS
 * Exe Memory: 344K
 * Code Len: 265 B
 * Language: G++
 */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a;
        long long b;
        cin>>a;
        b=pow((double)2,(double)a)-1;
        cout<<b<<endl;
    }
    return 0;
}
