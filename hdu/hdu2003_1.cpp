/* Problem ID: 2003
 * Author: YQ_Beyond
 * Run ID: 10854822
 * Exe Time: 0MS
 * Exe Memory: 288K
 * Code Len: 222 B
 * Language: C++
 */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);
    double t;
    while(cin>>t)
    {
        cout<<fabs(t)<<endl;
    }
    return 0;
}
