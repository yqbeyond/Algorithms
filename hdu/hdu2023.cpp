#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

using namespace std;

int arr[55][10];

int main()
{
	freopen("in.txt", "r", stdin);
	int n, m;
	int tmp = 0;
	while(scanf("%d%d", &n, &m) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m ; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}

		for (int i = 0; i < n; i++)
		{
			arr[i][m] = 0;
			for (int j = 0; j < m; j++)
			{
				arr[i][m] += arr[i][j];
			}
			if (i == 0)
				printf("%.2f", (double)arr[i][m] / m);
			else
				printf(" %.2f", (double)arr[i][m] / m);
		}
		printf("\n");
		for (int i = 0; i < m; i++)
		{
			arr[n][i] = 0;
			for (int j = 0; j < n; j++)
			{
				arr[n][i] += arr[j][i];
			}
			if (i == 0)
				printf("%.2f", (double)arr[n][i] / n);
			else
				printf(" %.2f", (double)arr[n][i] / n);
		}
		printf("\n");

		int _count = 0;
		for (int i = 0; i < n; i++)
		{
			bool flag = 1;
			for (int j = 0; j < m; j++)
			{
				if (arr[i][j] < (double)arr[n][j] / n)
				{
					flag = 0;
					break;
				}
			}
			if (flag)
				_count++;
		}

		printf("%d\n\n", _count);
		
	}
	return 0;
}
