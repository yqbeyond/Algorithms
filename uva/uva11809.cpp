#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>

double table_A[15][35]; // 小数部分
long long table_B[15][35]; // 整数部分

int main()
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 1; j <= 30; j++)
		{
			double m = 1 - pow(2, -1 - i);
			long long e = pow(2, j) - 1;
			double tmp = log10(m) + e * log10(2);
			table_B[i][j]= (long long) (tmp);
			table_A[i][j] = pow(10, tmp - table_B[i][j]);
		}
	}

	char num[50];
	while (scanf("%s", num) != -1)
	{
		int len = strlen(num);
		char *str_A = num, *str_B;
		for (int i = 0; i < len; i++)
			if (num[i] == 'e')
			{
				num[i] = '\0';	
				str_B = num + i + 1;
				break;
			}
		double A = atof(str_A);
		int B = atoi(str_B);
		for (int i = 0; i <= 9; i++)
		{
			int ok = 0;
			for(int j = 1; j <= 30; j++)
			{
				if (B == table_B[i][j] && fabs(table_A[i][j] - A) <= 0.000001)
				{
					printf("%d %d\n", i, j);
					ok = 1;
					break;
				}
			}
			if (ok)
				break;
		}
	}

	return 0;
}
