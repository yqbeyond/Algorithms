#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[200000];
char t[200000];

int main()
{
	while(scanf("%s%s", s, t) != -1)
	{
		int i = 0, j = 0;
		int s_len = strlen(s);
		int t_len = strlen(t);
		int flag = 0;
		for (i = 0; i < s_len;)
		{
			while(j < t_len)
			{
				if (s[i] == t[j])
				{
					i++;
					j++;
					break;
				}
				j++;
			}
			if ( j == t_len)
				break;
		}
		if (i == s_len)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
