#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(char* num, int len)
{
	int res = 0;
	for (int i = 0; i < len; i++)
	{
		res = res * 10 + (num[i] - '0');
	}
	return res;
}

int main()
{
	freopen("in.txt", "r", stdin);
	int n;
	char num[10];
	int _max, _min;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%s", num);
		int len = strlen(num);

		_max = max(num, len);
		_min = _max - 9 * len;

		int flag = 0;
		for(int i = _min; i <= _max; i++)
		{
			int res = i;
			int tmp = i;
			while(tmp != 0)
			{
				res += (tmp % 10);
				tmp /= 10;
			}

			if (res == _max)
			{
				printf("%d\n", i);
				flag = 1;
				break;
			}
		}
		if (!flag)
			printf("0\n");
	}
}
