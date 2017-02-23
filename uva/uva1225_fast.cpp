#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int len(int n)
{
	int res = 0;
	if (n == 0)
		return 1;
	while(n)
	{
		n /= 10;
		res++;
	}
	return res;
}

void print(long long *times)
{
	for (int i = 0 ; i < 9; i++)
		printf("%lld ", times[i]);
	printf("%lld\n", times[9]);
}

int main()
{	

	long long times[10][10] = {
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};	

	for (int i = 2; i < 10; i++)
	{
		times[i][0] = times[i-1][0] + times[i-1][1] * 9;
		for (int j = 1; j <= 9; j++)		
			times[i][j] = (long long)(pow(10, i - 1)) + times[i - 1][j] * 10;		
	}
	
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n;
		scanf("%d", &n);
		int _len = len(n);
		long long res[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		int tmp = 9;
		for (int i = 1; i < _len; i++)
		{
			res[0] += tmp * i;
			tmp *= 10;
		}

		res[0] += (n - (long long)(pow(10, _len-1)) + 1) * _len;

		while(n)
		{
			int first = n / (long long)(pow(10, _len - 1));
			for (int i = 1; i < 10; i++)
			{
				res[i] +=  times[_len - 1][i] * first;
				if (i < first)
					res[i] += (long long)(pow(10, _len - 1));
				if (i == first)
					res[i] += 1;
			}

			n %= (long long)(pow(10, _len - 1));
			if (first != 0)
				res[first] += n;				

			_len -= 1;
		}

		for (int i = 1; i < 10; i++)
		{
			res[0] -= res[i];
		}
		
		print(res);
	}

	return 0;
}
