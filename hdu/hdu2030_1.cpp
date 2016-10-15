/* Problem ID: 2030
 * Author: YQ_Beyond
 * Run ID: 10865950
 * Exe Time: 0MS
 * Exe Memory: 312K
 * Code Len: 380 B
 * Language: C++
 */

#include<iostream>
using namespace std;
const int SIZE=1000;
char a[SIZE];
int main()
{
    int  T;
    cin>>T;
    char ch;
    cin.get(ch);
    while(T--)
    {
        int counter=0;
        cin.getline(a,1000,'\n');
        for(int i=0;a[i]!='\0';i++)
            if(a[i]<0)
                counter++;
        cout<<counter/2<<endl;
    }
    return 0;
}
