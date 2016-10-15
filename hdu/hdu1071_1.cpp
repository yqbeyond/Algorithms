/* Problem ID: 1071
 * Author: YQ_Beyond
 * Run ID: 11152760
 * Exe Time: 0MS
 * Exe Memory: 320K
 * Code Len: 566 B
 * Language: C++
 */

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        double x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        double a=(y2-y1)/((x1-x2)*(x1-x2));
        double b=-2*a*x1;
        double c=y1-a*x1*x1-b*x1;
        double a1=(y2-y3)/(x2-x3);
        double b1=y2-a1*x2;
        double area=fabs((1.0/3*a*x2*x2*x2+1.0/2*(b-a1)*x2*x2+(c-b1)*x2)-(1.0/3*a*x3*x3*x3+1.0/2*(b-a1)*x3*x3+(c-b1)*x3));
        printf("%.2f\n",area);
    }
    return 0;
}
