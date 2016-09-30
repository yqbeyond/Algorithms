#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

using namespace std;

char str[55];

int main()
{
	freopen("in.txt", "r", stdin);
	int n;
	while (cin>>n)
	{
		char ch = getchar();
		for (int i = 0; i < n; i ++)
		{
			int j = 0;
			while(ch = getchar())
			{
				if (!(ch == '\0' || ch == '\n'))
					str[j++] = ch;
				else
					break;
			}
			str[j] = '\0';
		//	printf("%s\n", str);
			bool flag = true;
			for (int j = 0; str[j] != '\0'; j++)
			{
				if (j == 0)
				{
					if (!((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z') || str[j] == '_'))
					{
						flag = false;
						break;
					}
				}
				else
				{		
					if (!((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z') || str[j] == '_' || (str[j] >= '0' && str[j] <= '9')))
					{
						flag = false;
						break;
					}
				}
			}
			if (flag)
				printf("yes\n");
			else
				printf("no\n");
		}
	}
	return 0;
}
