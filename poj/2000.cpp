/* Problem ID: 2000
 * Author: 1307010418
 * Memory: 232K
 * Time: 0MS
 */

#include<iostream>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int sum=0;
        int counter=0;
        for(int i=1;;i++)
        {
            for(int j=1;j<=i;j++)
            {
                sum+=i;
                counter++;
                if(n==counter)
                    break;
            }
            if(n==counter)
                break;
        }
        cout<<n<<&#39; &#39;<<sum<<endl;
    }
}
