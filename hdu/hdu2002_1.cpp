/* Problem ID: 2002
 * Author: YQ_Beyond
 * Run ID: 10854825
 * Exe Time: 0MS
 * Exe Memory: 292K
 * Code Len: 240 B
 * Language: C++
 */

#include<iostream>
const double PI=3.1415927;
using namespace std;
int main()
{
    cout.setf(ios::fixed);
    cout.precision(3);
    double t;
    while(cin>>t)
    {
        cout<<4.0/3*PI*t*t*t<<endl;
    }
    return 0;
}
