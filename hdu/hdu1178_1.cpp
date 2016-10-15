/* Problem ID: 1178
 * Author: YQ_Beyond
 * Run ID: 11195910
 * Exe Time: 15MS
 * Exe Memory: 336K
 * Code Len: 380 B
 * Language: G++
 */

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        if(n==0)
            break;
        double sum=double(n)*double(n+1)*double(n+2)/6;
        int j=0;
        while(sum>=10)
        {
            sum/=10;
            ++j;
        }
        printf("%.2lfE%d\n",sum,j);
    }
    return 0;
}
