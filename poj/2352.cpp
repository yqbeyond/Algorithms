/* Problem ID: 2352
 * Author: 1307010418
 * Memory: 1276K
 * Time: 375MS
 */

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>

#define maxn 32005
typedef long long ll;
using namespace std;

struct _points{
	int x;
	int y;
}points[maxn];

int n;
ll c[maxn];

int lowbit(int x)
{
	return x & (-x);
}

void update(ll i, int x)
{
	while(i <= maxn)
	{
		c[i] += x;
		i += lowbit(i);
	}
}

ll sum(ll i)
{
	ll s = 0;
	while (i > 0)
	{
		s += c[i];
		i -= lowbit(i);
	}
	return s;
}

ll level[maxn];
int main()
{
	//freopen("in.txt", "r", stdin);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d%d", &points[i].x, &points[i].y);
		points[i].x += 1;
	}
	memset(c, 0, sizeof(c));
	memset(level, 0, sizeof(level));
	for (int i = 1; i <= n; i++)
	{
		update(points[i].x, 1);
		level[sum(points[i].x)]++;
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d\n", level[i]);
	}
	return 0;
}