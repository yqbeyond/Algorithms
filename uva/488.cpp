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

int main(){
	//freopen("in.txt", "r", stdin);
	int n;
	scanf("%d", &n);
	int amplitude, frequency;
	while(n--)
	{
		scanf("%d%d", &amplitude, &frequency);
		for (int i = 0; i < frequency; i++)
		{
			for (int j = 1; j <= amplitude; j++)
			{
				for (int k = 1; k <= j; k++)
				{
					printf("%d", j);
				}
				printf("\n");
			}
			for (int j = amplitude - 1; j >= 1 ; j--)
			{
				for (int k = 1; k <= j; k++)
				{
					printf("%d", j);
				}
				printf("\n");
			}
			if (i != frequency - 1)
				printf("\n");
		}
		if (n != 0)
			printf("\n");
	}
	return 0;
}
