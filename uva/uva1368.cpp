#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int maxn = (1 << 30) - 1 + (1 << 30);
char DNA[55][1010];

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int m, n;
		scanf("%d%d", &m, &n);
		for (int i = 0; i < m; i++)
			scanf("%s", DNA[i]);

		int res_hamming = 0;		
		char res_dna[1010]; 
		char charaters[4] = {'A', 'C', 'G', 'T'};
		for (int j = 0; j < n; j++)
		{
			int min = maxn;
			for (int k = 0; k < 4; k++)
			{
				int tmp_hamming = 0;
				for (int i = 0; i < m; i++)
				{
					if (DNA[i][j] != charaters[k])
					{
						tmp_hamming++;
					}
				}
				if (tmp_hamming < min)
				{
					min = tmp_hamming;
					res_dna[j] = charaters[k];					
				}
			}
			res_hamming += min;
		}
		res_dna[n] = '\0';
		printf("%s\n%d\n", res_dna, res_hamming);
	}
	return 0;
}
