#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	freopen("in.txt", "r", stdin);
	int m, n;
	while(scanf("%d%d", &m, &n) != EOF)
	{
		int score, v_row = 0, v_col = 0, v_score = 0;
		for (int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				scanf("%d", &score);
				if (abs(score) > abs(v_score))
				{
					v_score = score;
					v_row = i + 1;
					v_col = j + 1;
				}
			}
		}

		printf("%d %d %d\n", v_row, v_col, v_score);
	}
	return 0;
}
