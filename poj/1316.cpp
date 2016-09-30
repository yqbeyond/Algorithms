/* Problem ID: 1316
 * Author: 1307010418
 * Memory: 220K
 * Time: 16MS
 */

#include<iostream>
using namespace std;
int main()
{
    for(int i = 1;i <=10000; i++)
    {
        int flag = 0;
        int sum;
        for(int j= i-9*4;j<i;j++)
        {
            int h = j;
            sum=j;
            while(h != 0)
            {
                sum += h%10;
                h /= 10;
            }
            if(sum == i)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout<<i<<endl;
    }
    return 0;
}
