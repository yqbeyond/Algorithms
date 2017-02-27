#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

char grid[15][15];
int pos[15][15];

struct words{
	int id;
	char str[15];
};

int cmp (const struct words words1, const struct words words2)
{
	return words1.id < words2.id;
}

struct words down_words_list[110];

int main()
{	
	int puzzle = 1;
	int first = 1;
	while (1)		
	{		
		memset(grid, '\0', sizeof(grid));
		memset(pos, 0, sizeof(pos));
		int r, c;
		int start = 1;
		scanf("%d", &r);
		if (r == 0)
			break;
		if (!first)
		{
			printf("\n");
		}
		else
		{
			first = 0;
		}

		scanf("%d", &c);
		printf("puzzle #%d:\n", puzzle++);
		for (int i = 1; i <= r; i++)
		{
			scanf("%s\n", grid[i] + 1);
			for (int j = 1; j <= c; j++)
			{
				if (grid[i][j] != '*' && (grid[i-1][j] == '\0' || grid[i-1][j] == '*' || grid[i][j-1] == '\0'|| grid[i][j-1] == '*'))
				{
					pos[i][j] = start++;
				}
			}
		}

		printf("Across\n");
		for (int i = 1; i <= r; i++)
		{
			int begin = 0;
			for (int j = 1; j <= c + 1; j++)
			{
				if (!begin)
				{
					if (pos[i][j] != 0)
					{
						begin = 1;
						printf("%3d.%c", pos[i][j], grid[i][j]);
					}
				}
				else
				{
					if (grid[i][j] != '\0' && grid[i][j] != '*')
					{
						printf("%c", grid[i][j]);
					}
					else
					{
						printf("\n");
						begin = 0;
					}
				}
			}
		}

		int id_start = 0;
		int word_start = 0;

		printf("Down\n");
		for (int j = 1; j <= c; j++)
		{
			int begin = 0;
			for (int i = 1; i <= r + 1; i++)
			{
				if (!begin)
				{
					if (pos[i][j] != 0)
					{
						begin = 1;
						down_words_list[id_start].id = pos[i][j];
						down_words_list[id_start].str[word_start++] = grid[i][j];
					}
				}
				else
				{
					if (grid[i][j] != '\0' && grid[i][j] != '*')
					{
						down_words_list[id_start].str[word_start++] = grid[i][j];
					}
					else
					{
						down_words_list[id_start].str[word_start++] = '\0';
						id_start++;
						begin = 0;
						word_start = 0;
					}
				}
			}
		}
		sort(down_words_list, down_words_list+id_start, cmp);

		for (int i = 0; i < id_start; i++)
		{
			printf("%3d.%s\n", down_words_list[i].id, down_words_list[i].str);
		}
	}
	return 0;
}
