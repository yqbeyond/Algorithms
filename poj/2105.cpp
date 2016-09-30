/* Problem ID: 2105
 * Author: 1307010418
 * Memory: 216K
 * Time: 0MS
 */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char a[35];
    int T;
    cin>>T;
    while(T--)
    {
        int number[4]={0};
        cin>>a;
        for(int i=31;i>23;i--)
        {
            number[0]+=(a[i]-&#39;0&#39;)*pow(double(2),31-i);
        }
        for(int i=23;i>15;i--)
        {
            number[1]+=(a[i]-&#39;0&#39;)*pow(double(2),23-i);
        }
        for(int i=15;i>7;i--)
        {
            number[2]+=(a[i]-&#39;0&#39;)*pow(double(2),15-i);
        }
        for(int i=7;i>=0;i--)
        {
            number[3]+=(a[i]-&#39;0&#39;)*pow(double(2),7-i);
        }
        cout<<number[3]<<&#39;.&#39;<<number[2]<<&#39;.&#39;<<number[1]<<&#39;.&#39;<<number[0];
        if(T!=0)
            cout<<endl;
    }
}
