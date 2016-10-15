/* Problem ID: 2009
 * Author: YQ_Beyond
 * Run ID: 13169605
 * Exe Time: 0MS
 * Exe Memory: 1832K
 * Code Len: 364 B
 * Language: G++
 */

#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;
int main()
{
    int n;
    int m;
    double sum = 0;

    while(cin>>n>>m)
    {
        sum = n * 1.0;
        double _n = n * 1.0;
        while(--m)
        {
            _n = sqrt(_n);
            sum += _n;
        }

        printf("%.2lf\n",sum);
    }

}
