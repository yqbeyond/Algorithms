/* Problem ID: 1020
 * Author: YQ_Beyond
 * Run ID: 11201395
 * Exe Time: 0MS
 * Exe Memory: 304K
 * Code Len: 419 B
 * Language: C++
 */

#include<iostream>
#include<cstring>
using namespace std;
char String[10001];
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        cin>>String;
        int number=1;
        for (int i=0;i<strlen(String);i++)
        {
            if (String[i]==String[i+1])
                number++;
            else
            {
                if (number>1)
                    cout<<number;
                cout<<String[i];
                number=1;
            }
        }
        cout<<endl;
    }
    return 0;
}
