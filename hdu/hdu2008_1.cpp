/* Problem ID: 2008
 * Author: YQ_Beyond
 * Run ID: 13162324
 * Exe Time: 0MS
 * Exe Memory: 1664K
 * Code Len: 549 B
 * Language: G++
 */

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    //freopen("data.txt","r",stdin);
    int fu_num,ze_num,zh_num;
    int n;
    while(cin>>n,n)
    {
        fu_num=0, ze_num =0, zh_num =0;
        double num;
        while( n-- )
        {
            cin>>num;
            if(num < 0)
                fu_num++;
            else if(num == 0 )
                ze_num++;
            else
                zh_num++;
        }
        cout<<fu_num<<' '<<ze_num<<' '<<zh_num<<endl;
    }
    return 0;
}
