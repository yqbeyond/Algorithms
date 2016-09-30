#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
int main()
{
	int n;
	char str[1000];
	while (~scanf("%d", &n))
	{
		while (n--)
		{
			printf("%d\n", n);
			scanf("%s", str);
			int len = strlen(str);
			bool flag = true;
			for (int i = 0; i < len / 2; i++)
			{
				if (str[i] != str[len - i -1])
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
	}
	return 0;
}
