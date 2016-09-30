/* Problem ID: 2524
 * Author: 1307010418
 * Memory: 928K
 * Time: 4688MS
 */

#include <iostream>
using namespace std;

int number[50005];
int counter;

int Find(int x)
{
	while(number[x]!=x)
		x=number[x];

	return x;
}

void change(int x,int y)
{
	int i=0;
	int px=Find(x),py=Find(y);
	
	if(px!=py)
	{
		--counter;
		number[px]=py;
	}
	return;
}

int main()
{
	int k=1,n,m;

	while(cin>>n>>m)
	{
	    if(n==0&&m==0)
            break;

		for(int i=1;i<=n;++i) number[i]=i;

		counter=n;

        int x,y;
		for(int i=0;i<m;++i)
		{
			cin>>x>>y;
			change(x,y);
		}

		cout<<"Case "<<k++<<": "<<counter<<endl;
	}
}
