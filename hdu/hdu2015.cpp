#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
	int n, m;
	while (~scanf("%d%d",&n,&m))
	{
		int i;
		for (i = 1; i <= n - m ; i += m)
		{
			printf("%d ", (2*i+m-1));
		}
		printf("%d\n", i + n);
	}
	return 0;
}
