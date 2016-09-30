#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

int main()
{
	freopen("in.txt", "r", stdin);
	char ch;
	bool space = true;
	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;

		if (space)
		{
			printf("%c", ch - 'a' + 'A');
			space = false;
		}
		else
		{
			printf("%c", ch);
			if (ch == ' ' || ch == '\n')
			{
				space = true;
			}	
		}
	}
	return 0;
}
