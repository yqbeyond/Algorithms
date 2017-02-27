#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int res[30000][2]; // quotient, remainder

int main()
{
	int a, b, a_copy;
	int first = 1;
	while(scanf("%d%d",&a, &b) != -1)
	{
		a_copy = a;
		//if (!first) printf("\n"); else first = 0;
		int i = 0, start = 1, end = 2;
		int flag = 0;
		while(1)
		{
			res[i][0] = a_copy / b;
			res[i][1] = a_copy % b;
//			printf("%4d / %4d = %4d ... %4d\n", a_copy, b, res[i][0], res[i][1]);
			if (res[i][1] == 0)
			{
				res[i+1][0] = res[i+1][1] = 0;
				start = i + 1;
				end = i + 2;
				break;
			}
						
			for (int j = 0; j < i; j++)
			{
				if (res[j][1] == res[i][1])
				{
					start = j + 1;
					end = i + 1;				
					flag = 1;
					break;
				}
			}
			if (flag)
				break;
			a_copy = res[i][1] * 10;
			i++;
		}
		//printf("start: %d end: %d\n", start, end);
		printf("%d/%d = %d.", a, b, res[0][0]);
		for (int i = 1; i < start; i++)
		{
			printf("%d", res[i][0]);
		}
		printf("(");
		
		for(i = start; i < end; i++)
		{
			printf("%d", res[i][0]);
			if (i >= 50)
			{
				break;
			}
		}
		if (i >= 50)
		{
			printf("...");
		}
		printf(")\n");
		printf("   %d = number of digits in repeating cycle\n\n", end - start);
	}
}
