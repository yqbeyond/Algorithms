/* Problem ID: 1061
 * Author: YQ_Beyond
 * Run ID: 11137827
 * Exe Time: 15MS
 * Exe Memory: 332K
 * Code Len: 253 B
 * Language: C++
 */

#include<cmath>
#include<iostream>
int a[20]={1,4,7,6,5,6,3,6,9,0,1,6,3,6,5,6,7,4,9,0};
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x;
        cin>>x;
        cout<<a[x%20-1]<<endl;
    }
}

