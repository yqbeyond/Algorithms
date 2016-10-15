/* Problem ID: 2001
 * Author: YQ_Beyond
 * Run ID: 12486840
 * Exe Time: 31MS
 * Exe Memory: 1244K
 * Code Len: 226 B
 * Language: G++
 */

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    double x1,y1,x2,y2;
    while(cin>>x1>>y1>>x2>>y2)
    printf("%.2f\n",sqrt(pow(x1-x2,2.0)+pow(y1-y2,2.0)));
    return 0;
}
