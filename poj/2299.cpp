/* Problem ID: 2299
 * Author: 1307010418
 * Memory: 15168K
 * Time: 704MS
 */

/* 
 * POJ 2299
 * 逆序数
 * Author: lBlack
 */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

#define maxn 500005
typedef long long ll;
using namespace std;

typedef struct node{
	int index;
	ll value;
}Node;

Node a[maxn];
ll c[maxn], b[maxn], n;

int lowbit(int x)
{
	return x & (-x);
}

void update(ll i,int x)
{
	while(i <= n)
	{
		c[i] += x;
		i += lowbit(i);
	}
}

ll sum(ll i)
{
	ll s = 0;
	while(i > 0)
	{
		s += c[i];
		i -= lowbit(i);
	}
	return s;
}

int cmp (Node a, Node b)
{
	return a.value < b.value;
}

int main()
{
	//freopen("in.txt", "r" ,stdin);
	while(scanf("%d",&n), n)
	{
		ll ans=0;
		for(int i = 1; i <= n; i++)
		{
			scanf("%d", &a[i].value);
			a[i].index = i;
		}

		sort(a+1, a+n+1, cmp);
		
		for(int i = 1; i <= n;i++)
		{
			b[a[i].index]=i; // 离散化
		}

		memset(c, 0, sizeof(c) );

		for(int i = 1; i <= n; i++)
		{
			update(b[i], 1);
			ans += i - sum(b[i]);
		}
		printf("%lld\n",ans);
	}
	return 0;
}