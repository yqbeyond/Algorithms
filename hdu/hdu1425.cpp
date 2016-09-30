#include <iostream>
#include <cstring>
#include <cstdio>

#define MAXN 1000005

using namespace std;

int num[MAXN];

int main()
{
	freopen("in.txt", "r", stdin);
	int n, m, t;
	while (~scanf("%d%d", &n,&m)){
		memset(num, 0, sizeof(num));
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &t);
			num[t + 500000] = 1;			
		}
		for (int i = MAXN; m > 0; i--)
		{
			if (num[i])
			{
				printf("%d", i - 500000);
				if (m > 1)
				{
					printf(" ");
				}
				else
				{
					puts("");
					;break;
				}
				m--;
			}
		}
	}
	return 0;
}
