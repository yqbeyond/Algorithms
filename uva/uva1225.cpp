#include <stdio.h>
#include <string.h>

int times[15] = {0};

int main()
{
	int T;
	scanf("%d", &T);	
	while (T--)
	{
		memset(times, 0, sizeof(times));
		int n, tmp;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			tmp = i;
			while(tmp)
			{
				times[tmp%10]++;
				tmp /= 10;
			}
		}

		for (int i = 0 ;i < 9; i++)
		{
			printf("%d ", times[i]);
		}
		printf("%d\n", times[9]);
	}		

	return 0;
}
