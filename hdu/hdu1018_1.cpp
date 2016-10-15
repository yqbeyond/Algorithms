/* Problem ID: 1018
 * Author: YQ_Beyond
 * Run ID: 11137311
 * Exe Time: 406MS
 * Exe Memory: 344K
 * Code Len: 271 B
 * Language: C++
 */

#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int T,n;
    double j;
    cin>>T;
    while(T--)
    {
        cin>>n;
        j=0;
        for(int i=1;i<=n;i++)
            j+=log10f(i);
        cout<<int(j+1)<<endl;
    }
}

