#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

#define MAXN 105
using namespace std;

int N;
int A[MAXN], B[MAXN], C[MAXN];
int a[MAXN][4], _count;
int bb, cc;
int ans;

int main()
{
	freopen("in.txt", "r", stdin);
	while (scanf("%d", &N))
	{
		if (N == 0) break;
		for (int i =0 ; i < N; i++)
		{
			scanf("%d%d%d", &A[i], &B[i], &C[i]);
			a[i][0] = A[i] / 1000;
			a[i][1] = (A[i] % 1000) / 100;
			a[i][2] = (A[i] / 10) % 10;
			a[i][3] = A[i] % 10;
			// printf("%d %d %d %d\n", a[i][0], a[i][1], a[i][2], a[i][3]);
		}
		
		_count = 0;	
		ans = 0;

		for (int i = 1000; i <= 9999; i++)
		{
			int aa[4];
			aa[0]= i  / 1000;
			aa[1] = (i % 1000) / 100;
			aa[2] = (i / 10) % 10;
			aa[3] = i % 10;
			//printf("%d %d %d %d\n", aa[0], aa[1], aa[2], aa[3]);

			bool flag = 1;
			for (int j = 0; j < N; j++)
			{
				bb = cc = 0;
				for (int k = 0; k < 4; k++) {
					if (aa[k] == a[j][k]) cc++;
				}
				int aaa[4] = {a[j][0], a[j][1], a[j][2], a[j][3]};
				for (int k = 0; k < 4; k ++)
				{
					for (int l = 0; l < 4; l++)
					{
						if (aa[k] == aaa[l])
						{
							bb++;
							aaa[l] = 10;
							break;
						}
					}
				}

				if (!(bb == B[j] && cc == C[j]))
				{
					flag = 0;
				//	break;
				}
			}
			if (flag)
			{
				_count++;
				ans = i;
			}
		}
		if (_count == 1)
		{
			printf("%d\n", ans);
		}
		else
		{
			printf("Not sure\n");
		}
	}
	return 0;
}
