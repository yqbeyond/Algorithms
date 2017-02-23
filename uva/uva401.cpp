#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char mi[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

char str[100];

int index(char ch)
{
	if (isalpha(ch))
		return ch - 'A';
	return ch - '1' + 26;
}

int main()
{
	freopen("in.txt", "r", stdin);
	while (scanf("%s", str) != -1)
	{
		int len = strlen(str);
		int i, is_p = 1, is_m = 1, _index;
		for (i = 0; i < len / 2; i++)
		{
			if (str[i] != str[len - i - 1])			
				is_p = 0;			
			_index = index(str[i]);
			if (mi[_index] != str[len - i - 1])
				is_m = 0;
		}

		if (len % 2 == 1)
		{
			_index = index(str[i]);
			if (mi[_index] != str[i])
				is_m = 0;	
		}
		
		if (is_p == 0 && is_m == 0 )
		{
			printf("%s -- is not a palindrome.\n\n", str);
		}
		else if (is_p == 1 && is_m == 0)
		{	
			printf("%s -- is a regular palindrome.\n\n", str);
		}
		else if (is_p == 0 && is_m == 1)
		{			
			printf("%s -- is a mirrored string.\n\n", str);
		}
		else if(is_p == 1 && is_m == 1)
		{
			printf("%s -- is a mirrored palindrome.\n\n", str);
		}
	}

	return 0;
}
