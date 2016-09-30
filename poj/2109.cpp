/* Problem ID: 2109
 * Author: 1307010418
 * Memory: 800K
 * Time: 16MS
 */

#include<iostream>
//#include<fstream>
#include<cmath>
#include<iomanip>
using namespace std;
//ifstream fcin("123.txt");
int main()
{
    int n;
    double p;

    while(cin>>n>>p)
    {
        cout.flags(ios::fixed);
        cout.ios::precision(0);
        cout<<pow(p,1.0/n)<<endl;
    }
    return 0;
}
