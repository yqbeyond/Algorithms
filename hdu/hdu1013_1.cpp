/* Problem ID: 1013
 * Author: YQ_Beyond
 * Run ID: 11196714
 * Exe Time: 0MS
 * Exe Memory: 284K
 * Code Len: 542 B
 * Language: C++
 */

#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
int main()
{
    char str[10000];
    while(cin>>str)
    {
        if (str[0]=='0')
            break;
        int sum=0;
        for(int i=0;str[i]!='\0';i++)
            sum+=str[i]-'0';
        int s=sum;
        while(s>=10)
        {
            sum=s;
            s=0;
            while(sum>0)
            {
                s+=sum%10;
                sum/=10;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
