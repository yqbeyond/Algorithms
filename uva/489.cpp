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

typedef long long ll;


using namespace std;

#define maxn 1000

char solution[maxn];
char gueses[maxn];

int main(){
	//freopen("in.txt", "r", stdin);
	int round;
	while(scanf("%d", &round), round != -1)
	{
		scanf("%s", solution);
		scanf("%s", gueses);
		char hash[27] = {0};
		int s_len = strlen(solution);
		int g_len = strlen(gueses);
		int count = s_len;
		int draw = 0;
		printf("Round %d\n", round);

		for (int i = 0; i < g_len; i++)
		{
			if (hash[gueses[i] - 'a'] != 1)
			{
				bool found = 0;
				for(int j = 0; j < s_len; j++)
				{
					if (solution[j] == gueses[i])
					{
						found = 1;
						count--;
					}				
				}
				if (found == 0)
				{
					draw++;
				}
				
				hash[gueses[i] - 'a'] = 1;

				if (count == 0)
				{
					printf("You win.\n");
					break;
				}				
				if (draw == 7)
				{
					printf("You lose.\n");
					break;
				}
			}
		}

		if (count != 0 && draw != 7)
		{
			printf("You chickened out.\n");
		}
	}
	return 0;
}
