/* Problem ID: 2000
 * Author: YQ_Beyond
 * Run ID: 11142580
 * Exe Time: 0MS
 * Exe Memory: 308K
 * Code Len: 470 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    char s[4];
    while(cin>>s)
    {
        for(int i=0;i<2;i++)
            for(int j=0;j<2-i;j++)
            {
                char temp;
                if(s[j]>s[j+1])
                {
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }

            }
        cout<<s[0]<<' '<<s[1]<<' '<<s[2]<<endl;
    }
    return 0;
}
