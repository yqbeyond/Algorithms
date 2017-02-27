#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[100];

int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int res = 1, i;
		scanf("%s", str);
		int len = strlen(str);

		for (i = 1; i < len; i++)
		{
			if (str[i] == str[0])
			{
				res = i;
				int k = 1, j;	
				for (j = i + 1; j < len; j++)
				{
					if (str[j] == str[k % res])
					{
						++k;
						k %= res;
						continue;
					}
					else
					{
						break;
					}				
				}
				if (j == len)
				{
					if (len % res != 0)
						res = len;
					break;
				}
			}
		}

		if (i == len)
			res = len;

		printf("%d\n", res);
		if (n != 0)
			printf("\n");
	}
}
