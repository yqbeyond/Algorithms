/* Problem ID: 1067
 * Author: 1307010418
 * Memory: 692K
 * Time: 0MS
 */

#include <iostream>
#include <cmath>
using namespace std;

double q = (1 + sqrt(5.0)) / 2.0;

int f(int a, int b)
{
    if (a > b)
        swap(a, b);
    int k = b - a;
    if (a == (int)(k * q))
        return 0;
    return 1;
}

int main ()
{
    int a, b;
    while (cin>>a>>b)
       cout<<f(a,b)<<endl;
    return 0;
}
