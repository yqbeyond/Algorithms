/* Problem ID: 1028
 * Author: 1307010418
 * Memory: 692K
 * Time: 0MS
 */

#include <iostream>
#include <stack>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("test.txt","r",stdin);
    stack<string> stk1,stk2;
    string brower,command;

    brower="http://www.acm.org/";
    stk1.push(brower);

    while(cin>>command)
    {
        if(command=="QUIT")
            break;
        if(command=="VISIT")
        {
            cin>>brower;
            cout<<brower<<endl;
            stk1.push(brower);
            while(!stk2.empty())
                stk2.pop();
        }
        else if(command=="BACK")
        {
            if(stk1.size()>=2)
            {
                stk2.push(stk1.top());
                stk1.pop();
                cout<<stk1.top()<<endl;
            }
            else
                cout<<"Ignored"<<endl;
        }
        else if(command=="FORWARD")
        {
            if(!stk2.empty())
            {
                cout<<stk2.top()<<endl;
                stk1.push(stk2.top());
                stk2.pop();
            }
            else
                cout<<"Ignored"<<endl;
        }
    }
    return 0;
}
