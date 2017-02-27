#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char grid[6][6];
char cmd[1000];

void print_grid(char grid[6][6])
{
	for (int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			printf("%c ", grid[i][j]);
		}
		printf("%c\n", grid[i][4]);
	}
}

int main()
{
	int puzzle = 1;
	int first = 1;
	while (1)
	{
		int flag = 0;		
		char ch;
		int i = 0;
		int pos;
		while(i != 25)
		{
			ch = getchar();
			if (ch == 'Z')
			{
				flag = 1;
				break;
			}

			if (ch == '\n')
			{
				if (i % 5 == 4)
				{
					grid[i/5][i%5] = ' ';
					pos = i;
					++i;
				}
			}
			else
			{
				grid[i/5][i%5] = ch;
				if (ch == ' ')
					pos = i;
				++i;
			}
		}
		if (flag)
			break;

		if (first != 1)
			printf("\n");

		i = 0;
		flag = 0;
		while(1)
		{
			ch = getchar();
			if (ch == '\n')
				continue;
			cmd[i++] = ch;
			if (ch == '0')
			{
				ch = getchar();
				break;
			}
		}

		for (i = 0; cmd[i] != '0'; i++)
		{
			ch = cmd[i];
			if (ch == '0')
			{
				break;
			}
			if (ch == 'A')
			{
				if (pos / 5 != 0)
				{
					grid[pos/5][pos%5] = grid[pos/5-1][pos%5];
					grid[pos/5-1][pos%5] = ' ';
					pos -= 5;
				}
				else
				{
					flag = 1;
					break;
				}
			}
			else if (ch == 'B')
			{
				if (pos / 5 != 4)
				{
					grid[pos/5][pos%5] = grid[pos/5+1][pos%5];
					grid[pos/5+1][pos%5] = ' ';
					pos += 5;
				}
				else
				{
					flag = 1;
					break;
				}
			}
			else if (ch == 'L')
			{
				if (pos % 5 != 0)
				{
					grid[pos/5][pos%5] = grid[pos/5][pos%5-1];
					grid[pos/5][pos%5-1] = ' ';
					pos -= 1;
				}
				else
				{
					flag = 1;
					break;
				}
			}
			else if (ch == 'R')
			{
				if (pos % 5 != 4)
				{
					grid[pos/5][pos%5] = grid[pos/5][pos%5+1];
					grid[pos/5][pos%5+1] = ' ';
					pos += 1;
				}
				else
				{
					flag = 1;
					break;
				}
			}
			else
			{
				flag = 1;
				break;
			}
		}
		printf("Puzzle #%d:\n", puzzle++);
		if (flag == 1)
			printf("This puzzle has no final configuration.\n");
		else if (flag == 0)
			print_grid(grid);	
		first = 0;
	}

	return 0;
}
