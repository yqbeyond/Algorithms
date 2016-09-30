/* Problem ID: 1328
 * Author: 1307010418
 * Memory: 272K
 * Time: 63MS
 */

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

struct dot{
    double d_left;
    double d_right;
};

bool cmp(dot a,dot b)
{
    return (a.d_left!=b.d_left)?a.d_left<b.d_left:a.d_right<b.d_right;
}

dot position[1005];

int main()
{
    int n,d;
    int Case=1;

    while(cin>>n>>d)
    {
        if(n==0&&d==0)
            break;

        int x,y;
        bool flag=false;

        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
			position[i].d_left=x-sqrt(double(d*d-y*y));
			position[i].d_right=x+sqrt(double(d*d-y*y));
			if(y>d)
                flag=true;
        }

        cout<<"Case "<<Case++<<": ";

		if(flag==true)
		{
			cout<<"-1"<<endl;
			continue;
		}

		sort(position,position+n,cmp);//将点的位置从右到左排序

        int counter=1;
		double last=position[0].d_right;
		for(int i=1;i<n;i++)
		{
			if(last>position[i].d_right)
				last=position[i].d_right;
			else if(last<position[i].d_left)
			{
				counter++;
				last=position[i].d_right;
			}
		}

		cout<<counter<<endl;
    }
}
