/* Problem ID: 2802
 * Author: YQ_Beyond
 * Run ID: 10873822
 * Exe Time: 375MS
 * Exe Memory: 336K
 * Code Len: 305 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int a[5555];
int main()
{
   a[1]=1;
   a[2]=7;
   for(int i=3;i<=4018;i++)
   {
       a[i]=a[i-2]+3*i*(i-1)+1;
       if(a[i]>2009) 
          a[i]%=2009;
   }
   int n;
   while(cin>>n&&n)
   {
     cout<<a[n%4018]<<endl;
   }
   return 0;
}
