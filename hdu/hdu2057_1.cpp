/* Problem ID: 2057
 * Author: YQ_Beyond
 * Run ID: 10854862
 * Exe Time: 15MS
 * Exe Memory: 292K
 * Code Len: 237 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    cout.setf(ios::uppercase);
    __int64 x,y;
    while(cin>>hex>>x>>hex>>y)
        if(x+y>=0)
            cout<<hex<<x+y<<endl;
        else
            cout<<'-'<<hex<<(x+y)*(-1)<<endl;
    return 0;
}
