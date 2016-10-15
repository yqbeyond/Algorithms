/* Problem ID: 1406
 * Author: YQ_Beyond
 * Run ID: 10816028
 * Exe Time: 15MS
 * Exe Memory: 288K
 * Code Len: 703 B
 * Language: C++
 */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int wanshu(int x);
    int T,j,i;
    cin>>T;
    for(j=0;j<T;j++)
    {
        int _counter=0;
        int num1,num2;
        cin>>num1>>num2;
        if(num1>num2)
        {
            int temp;
            temp=num1;
            num1=num2;
            num2=temp;
        }
        for(i=num1;i<=num2;i++)
        {
            if(wanshu(i))
            {
                //cout<<i<<" is "<<"wanshu"<<endl;
                _counter++;
            }
        }
        cout<<_counter<<endl;
    }
    return 0;
}
int wanshu(int x)
{        
    int sum=0;
    for(int i=1;i<=(int)sqrt(double(x));i++)
        if(x%i==0)
           if(i!=x/i)
              sum+=i+x/i;
           else if(i==x/i)
              sum+=i;
    //cout<<"sum= "<<sum-x<<endl;
    return (sum-x)==x?1:0;
}

