#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <iterator>
#include <map>
#include <set>
#include <cctype>

typedef long long ll;


using namespace std;

char str[150];
int main(){
	freopen("in.txt", "r", stdin);
	while(cin.getline(str, 150))
	{
		if (strlen(str) == 0)
		{
			printf("\n");
			continue;
		}

		int len = strlen(str);
		int start = 0, sum = 0;
		for (int i = 0; i < len; i++ )
		{
			if (isdigit(str[i]))
			{
				sum += str[i] - '0';
			}
			else if (isalpha(str[i]) || '*' == str[i])
			{
				for (int j = 0; j < sum; j ++)					
				{
					printf("%c", str[i] == 'b' ? ' ' : str[i]);
				}
				start = i + 1;
				sum = 0;
			}
			else if ('!' == str[i])
				printf("\n");
		}
		printf("\n");
	}
	return 0;
}
