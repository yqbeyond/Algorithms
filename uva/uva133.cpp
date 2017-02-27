#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int person[30];

void print(int *p, int n)
{
	printf("list: ");
	for (int i = 0; i < n; i++)
		printf("%3d", p[i]);
	printf("\n");
}

int main()
{
	int N, k, m;
	while (scanf("%d%d%d", &N, &k, &m) != -1)
	{
		if (N == 0 && k == 0 && m == 0)
			break;
		for (int i = 0; i < N; i++)
			person[i] = N - i;

		int pointer_a = 0, pointer_b = N - 1;
		int k_copy = k, m_copy = m;

		bool first = 1;
		while (N)
		{
//			print(person, N);
			if (!first)
				printf(",");
			else
				first = 0;

			k = k_copy % N;
			m = m_copy % N;
			pointer_a -= k;
			pointer_b += m;
			pointer_a = (pointer_a + N) % N;
			pointer_b %= N;

			if (pointer_a == pointer_b)
			{
				printf("%3d", person[pointer_a]);
				for (int i = pointer_a; i < N - 1; i++)
					person[i] = person[i + 1];
				N -=1;
				if (N != 0)
				{
					pointer_b -= 1;
					pointer_a = (pointer_a + N) % N;
					pointer_b = (pointer_b + N) % N;
				}
			}
			else
			{
				printf("%3d%3d", person[pointer_a], person[pointer_b]);
				if (pointer_a < pointer_b)
				{
					for (int i = pointer_a; i < pointer_b - 1; i++)
						person[i] = person[i+1];
					for (int i = pointer_b; i < N - 1; i++)
						person[i - 1] = person[i + 1];
					N -= 2;
					if (N != 0)
					{						
						pointer_b -= 2;
						pointer_a = (pointer_a + N) % N;
						pointer_b = (pointer_b + N) % N;
					}
				}
				else
				{
					for (int i = pointer_b; i < pointer_a - 1; i++)
						person[i] = person[i+1];
					for (int i = pointer_a; i < N - 1; i++)
						person[i - 1] = person[i + 1];
					N -= 2;
					if (N != 0)
					{
						pointer_a -= 1;
						pointer_b -= 1;						
						pointer_a = (pointer_a + N) % N;
						pointer_b = (pointer_b + N) % N;
					}
				}
			}
		}
		printf("\n");
	}
}
