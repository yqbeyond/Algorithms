/* Problem ID: 1005
 * Author: 1307010418
 * Memory: 240K
 * Time: 0MS
 */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        double x,y;
        cin>>x>>y;
        double R=sqrt(x*x+y*y);
        double r;
        double S=0.0;
        int j;
        for(j=1;;j++)
        {
            S+=50.0;
            r=sqrt(2*S/3.1415926);
            if(r>R)
                break;
        }
        cout<<"Property "<<i+1<<&#39;:&#39;<<" This property will begin eroding in year "<<j<<&#39;.&#39;<<endl;
    }
    cout<<"END OF OUTPUT.";
    return 0;
}
