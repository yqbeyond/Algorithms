#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char str[100];

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%s", str);
		double molecular = 0;
		int len = strlen(str);
		int num = 0;
		double atomic_weight = 0;
		for (int i = 0; i < len; i++)
		{
			if (str[i] == 'C')
			{
				if(num == 0)
					num = 1;
				molecular += num * atomic_weight;
				atomic_weight = 12.01;
				num = 0;
			}
			else if (str[i] == 'H')
			{
				if(num == 0)
					num = 1;
				molecular += num * atomic_weight;
				atomic_weight = 1.008;
				num = 0;
			}
			else if (str[i] == 'O')
			{
				if(num == 0)
					num = 1;
				molecular += num * atomic_weight;
				atomic_weight = 16.00;
				num = 0;
			}
			else if (str[i] == 'N')
			{
				if(num == 0)
					num = 1;
				molecular += num * atomic_weight;
				atomic_weight = 14.01;
				num = 0;
			}
			else
			{
				num = num * 10 + (str[i] - '0');
			}
		}

		if(isalpha(str[len - 1]))
		{
			molecular += atomic_weight;
		}
		else
		{
			molecular += num * atomic_weight;
		}

		printf("%.3f\n", molecular);
	}
	return 0;
}
