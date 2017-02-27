#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

char str_a[110];
char str_b[110];

int count_a[30];
int count_b[30];

int cmp(int a, int b)
{
	return a > b;
}

int main()
{
	while(scanf("%s%s", str_a, str_b) != -1)
	{
		memset(count_a, 0, sizeof(count_a));
		memset(count_b, 0, sizeof(count_b));

		int len = strlen(str_a);
		for (int i = 0; i < len; i++)
		{
			count_a[str_a[i] - 'A'] ++;
			count_b[str_b[i] - 'A'] ++;
		}

		std::sort(count_a, count_a + 26, cmp);
		std::sort(count_b, count_b + 26, cmp);
		
		bool yes = true;		
		for (int i = 0; count_a[i] != 0 && i < 26; i++)
		{
			if (count_a[i] != count_b[i])
			{
				yes = false;
				break;
			}
		}

		if (yes)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
