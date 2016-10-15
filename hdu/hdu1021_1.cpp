/* Problem ID: 1021
 * Author: YQ_Beyond
 * Run ID: 11145594
 * Exe Time: 0MS
 * Exe Memory: 320K
 * Code Len: 209 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
    if(n%8==2||n%8==6)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    }
    return 0;
}
