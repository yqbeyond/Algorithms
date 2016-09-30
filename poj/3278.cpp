/* Problem ID: 3278
 * Author: 1307010418
 * Memory: 1808K
 * Time: 32MS
 */

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int large=200050;
struct pos
{
    int x;
    int step;
};

int n,k;
pos queue[large];
bool visit[large];

void BFS(void)
{
	int head,tail;
	queue[head=tail=0].x=n;
	queue[tail++].step=0;

	visit[n]=true;

	while(head<tail)
	{
		pos w=queue[head++];

		if(w.x==k)
		{
			cout<<w.step<<endl;
			break;
		}

		if(w.x-1>=0 && !visit[w.x-1])
		{
			visit[w.x-1]=true;
			queue[tail].x=w.x-1;
			queue[tail++].step=w.step+1;
		}
		if(w.x<=k && !visit[w.x+1])
		{
			visit[w.x+1]=true;
			queue[tail].x=w.x+1;
			queue[tail++].step=w.step+1;
		}
		if(w.x<=k && !visit[2*w.x])
		{
			visit[2*w.x]=true;
			queue[tail].x=2*w.x;
			queue[tail++].step=w.step+1;
		}
	}
}

int main(void)
{
	while(cin>>n>>k)
	{
	    memset(visit,false,sizeof(visit));
		BFS();
	}

	return 0;
}
