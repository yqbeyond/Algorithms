/* Problem ID: 1996
 * Author: YQ_Beyond
 * Run ID: 12346528
 * Exe Time: 0MS
 * Exe Memory: 332K
 * Code Len: 285 B
 * Language: G++
 */

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int t,n;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>n;
            printf("%.0f\n",pow(3,n));//cout<<pow(3,n)<<endl;
        }
    }
    return 0;
}
