#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char str[100];

int main()
{
	freopen("in.txt", "r", stdin);
	int n;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%s", str);
		int len = strlen(str);
		int score = 0;
		int tmp = 0;
		for (int i = 0; i < len; i++)
		{
			if (str[i] == 'O')
			{
				++tmp;
				score += tmp;
			}
			else
			{
				tmp = 0;
			}
		}
		printf("%d\n", score);
	}
	return 0;
}
