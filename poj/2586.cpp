/* Problem ID: 2586
 * Author: 1307010418
 * Memory: 248K
 * Time: 16MS
 */

#include<iostream>
using namespace std;
int main()
{
    int s,d;
    while(cin>>s>>d)
    {
        int answer=0;
        if(4*s-d<0)
        {
            answer=10*s-2*d;
        }
        else if(3*s-2*d<0)
        {
            answer=8*s-4*d;
        }
        else if(2*s-3*d<0)
        {
            answer=6*s-6*d;
        }
        else if(s-4*d<0)
        {
            answer=3*s-9*d;
        }
        else
        {
            answer=-1;
        }
        (answer<0)?cout<<"Deficit"<<endl:cout<<answer<<endl;
    }
    return 0;
}
