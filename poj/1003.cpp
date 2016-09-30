/* Problem ID: 1003
 * Author: 1307010418
 * Memory: 232K
 * Time: 0MS
 */

#include<iostream>
using namespace std;
int main()
{
	int i;
	double n;
	while(cin>>n)
	{
	    if((int)((n+0.09)*10+0.000001)==0)
            break;
		double sum=0.0;
		for(i=2;i<10000;i++)
		{
			sum=sum+1.0/i;
			if(sum>n)
			break;
		}
		cout<<i-1<<" card(s)"<<endl;
	}
	return 0;
}
