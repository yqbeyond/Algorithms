/* Problem ID: 2004
 * Author: YQ_Beyond
 * Run ID: 10854811
 * Exe Time: 0MS
 * Exe Memory: 280K
 * Code Len: 482 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        if(t>=90&&t<=100)
            cout<<"A"<<endl;
        else if(t>=80&&t<=89)
             cout<<"B"<<endl;
        else if(t>=70&&t<=79)
             cout<<"C"<<endl;
        else if(t>=60&&t<=69)
             cout<<"D"<<endl;
        else if(t>=0&&t<=59)
             cout<<"E"<<endl;
        else
            cout<<"Score is error!"<<endl;
    }
    return 0;
}
