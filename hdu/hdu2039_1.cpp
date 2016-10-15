/* Problem ID: 2039
 * Author: YQ_Beyond
 * Run ID: 10854925
 * Exe Time: 0MS
 * Exe Memory: 280K
 * Code Len: 399 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    double Max(double x,double y);
    int t;
    cin>>t;
    while(t--)
    {
        double x,y,z;
        cin>>x>>y>>z;
        double m=Max(Max(x,y),z);
        if(x+y+z-m>m&&x>0&&y>0&&z>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
double Max(double x,double y)
{
    return x>y?x:y;
}
