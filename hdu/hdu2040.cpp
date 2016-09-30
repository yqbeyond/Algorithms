#include <iostream>
#include <cstdio>
#include <cstdlib>

int main()
{
	int m;
	scanf("%d", &m);
	int A, B;
	while (m--)
	{
		scanf("%d%d", &A, &B);
		int sumA = 1;
		for (int i = 2; i * i <= A; i++)
		{
			if (A % i == 0)
			{
				sumA += i;
				if (A / i != i)
				{
					sumA += (A / i);
				}
			}
		}
		int sumB = 1;
		for (int i = 2; i * i <= B; i++)
		{
			if (B % i == 0)
			{
				sumB += i;
				if (B / i != i)
				{
					sumB += B / i;
				}
			}
		}
		if (sumA == B && sumB == A)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
