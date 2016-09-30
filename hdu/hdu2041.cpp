#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>

typedef unsigned long long ull;

using namespace std;

int main()
{
	ull N;
	ull M;
	int arr[45] = {1, 1};
	for (int i = 2; i < 45; i++)
	{
		arr[i] = arr[i-1] + arr[i-2];
	}

	scanf("%d", &N);
	while (N--)
	{
		scanf("%d", &M);
		printf("%lld\n", arr[M-1]);
	}
	return 0;
}
