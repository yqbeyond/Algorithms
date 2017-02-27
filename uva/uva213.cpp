#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char head[1500];
char map[10][150];

int bin2int(char*code, int len)
{
	int res = 0;
	int base = 1;
	for (int i = len - 1; i >= 0; i--)
	{
		res += base * (code[i] == '0' ? 0 : 1);
		base *= 2;
	}
	return res;
}

void get01(char *code, int len)
{	
	int start = 0;
	char ch;
	while(1)
	{
		ch = getchar();
		if (ch == '0' || ch == '1')
			code[start++] = ch;
		if (start >= len)
			break;
	}
}

int main()
{

	char ch;
	while(1)
	{
		memset(head, '\0', sizeof(head));
		memset(map, '\0', sizeof(map));
		int len = 0;
		while(1) // input head
		{
			while(1)
			{
				ch = getchar();
				if (ch == -1)
					exit(0);
				if (ch != '\n' && ch != '\r')
				{
					head[len++] = ch;
					break;
				}
			}

			ch = getchar();
			if (ch == -1)
				exit(0);
		
			if (ch == '\n' || ch == '\r')
			{
				head[len++] = '\0';
				break;
			}
			else
				head[len++] = ch;
		}
		
		int count = 0;
		int row = 0;
		int start = 2;
		int flag = 0;

		while(1)
		{		
			for (int col = 0; col < start - 1; col++)
			{				
				if (count >= len)
				{
					flag = 1;
					break;
				}
				map[row][col] = head[count++];
			}
			if (flag)
				break;
			row++;
			start *= 2;
		}

		start = 0;
		while(1)
		{
			char code[4] = {'\0', '\0', '\0', '\0'};
			get01(code, 3);
			int code_len = bin2int(code, 3);
			if (code_len == 0)
				break;

			int end = (1 << code_len) - 1;
			while(1)
			{
				memset(code, '\0', sizeof(code));
				get01(code, code_len);
				int value = bin2int(code, code_len);
				if (value == end)
					break;
				else
				{
					printf("%c", map[code_len - 1][value]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
