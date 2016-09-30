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

char sentences [105][105] = {'\0'};

int main(){
	freopen("in.txt", "r", stdin);
	int i = 0;
	int max_len = 0;
	while(cin.getline(sentences[i], 105))
	{
		int len = strlen(sentences[i]);
		if (strlen(sentences[i]) > max_len)
			max_len = len;
		i++;
	}
	for (int j = 0; j < max_len; j++)
	{
		for (int k = i - 1; k >= 0; k--)
		{
			if (sentences[k][j] != '\0')
			{
				printf("%c", sentences[k][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
