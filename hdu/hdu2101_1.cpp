/* Problem ID: 2101
 * Author: YQ_Beyond
 * Run ID: 10850172
 * Exe Time: 78MS
 * Exe Memory: 280K
 * Code Len: 152 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
int a,b;
while(cin>>a>>b)
{
(a+b)%86==0?cout<<"yes"<<endl:cout<<"no"<<endl;
}
return 0;
}