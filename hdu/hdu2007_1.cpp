/* Problem ID: 2007
 * Author: YQ_Beyond
 * Run ID: 13162274
 * Exe Time: 0MS
 * Exe Memory: 1612K
 * Code Len: 509 B
 * Language: G++
 */

#include<iostream>
#include<cmath>

using namespace std;
int main ()
{
    long long m,n;
    while(cin>>m>>n)
    {
        if(m > n)
        {
            int temp = m;
            m = n;
            n = temp;
        }
        long long ji_sum=0,ou_sum=0;
        for(;m<=n;m++)
        {
            if( m % 2 == 0)
                ou_sum += m * m;
            else
                ji_sum += m * m * m;
        }

        cout<<ou_sum<<' '<<ji_sum<<endl;
    }
    return 0;
}
