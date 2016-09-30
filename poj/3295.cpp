/* Problem ID: 3295
 * Author: 1307010418
 * Memory: 696K
 * Time: 0MS
 */

#include<iostream>
#include<stack>
#include<cstring>

using namespace std;
int p,q,r,s,t;
stack<char> sta;

bool Variable(char ch)
{
    switch(ch)
    {
        case &#39;p&#39;:sta.push(p);return true;
        case &#39;q&#39;:sta.push(q);return true;
        case &#39;r&#39;:sta.push(r);return true;
        case &#39;s&#39;:sta.push(s);return true;
        case &#39;t&#39;:sta.push(t);return true;
    }
    return false;
}

void work(char op)
{
    switch(op)
    {
        case &#39;K&#39;:
            {
                int x=sta.top();
                sta.pop();
                int y=sta.top();
                sta.pop();
                sta.push(x&&y);
                break;
            }
        case &#39;A&#39;:
            {
                int x=sta.top();
                sta.pop();
                int y=sta.top();
                sta.pop();
                sta.push(x||y);
                break;
            }
        case &#39;C&#39;:
            {
                int x=sta.top();
                sta.pop();
                int y=sta.top();
                sta.pop();
                sta.push((!x)||y);
                break;
            }
        case &#39;E&#39;:
            {
                int x=sta.top();
                sta.pop();
                int y=sta.top();
                sta.pop();
                sta.push(x==y);
                break;
            }
        case &#39;N&#39;:
            {
                int x=sta.top();
                sta.pop();
                sta.push(!x);
                break;
            }
    }
    return;
}

int main()
{
    char wff[105];
    while(cin>>wff)
    {
        if(wff[0]==&#39;0&#39;)
            break;
        int len=strlen(wff);  //逻辑表达式的长度

        bool flag=true;     //标记逻辑表达式是否为永真式
        for(p=0;p<=1;p++)  //枚举逻辑变量的值
        {
            for(q=0;q<=1;q++)
            {
                for(r=0;r<=1;r++)
                {
                    for(s=0;s<=1;s++)
                    {
                        for(t=0;t<=1;t++)
                        {
                            for(int pw=len-1;pw>=0;pw--)
                            {
                                if(!Variable(wff[pw]))
                                    work(wff[pw]);
                            }
                            int answer=sta.top(); 
                            sta.pop();
                            if(!answer)
                            {
                                flag=false;
                                break;
                            }
                        }
                        if(!flag)
                            break;
                    }
                    if(!flag)
                        break;
                }
                if(!flag)
                    break;
            }
            if(!flag)
                break;
        }
        cout<<((flag==true)? "tautology":"not")<<endl;
    }
    return 0;
}
