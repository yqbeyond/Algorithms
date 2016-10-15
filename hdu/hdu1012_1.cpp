/* Problem ID: 1012
 * Author: YQ_Beyond
 * Run ID: 11159161
 * Exe Time: 0MS
 * Exe Memory: 316K
 * Code Len: 392 B
 * Language: G++
 */

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double e=1;
    int temp=1;
    cout<<"n e"<<endl;
    cout<<"- -----------"<<endl;
    cout<<"0 1"<<endl;
    cout<<"1 2"<<endl;
    cout<<"2 2.5"<<endl;
    for(int i=1;i<=9;i++)
    {
        temp*=i;
        e=e+1.0/temp;
        if(i>2)
        printf("%d %.9f\n",i,e);
    }
    return 0;
}
