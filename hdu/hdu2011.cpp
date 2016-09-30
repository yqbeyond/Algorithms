#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
	int n, tmp;
	while (cin>>n)
	{
		int _min = 101, _max = -1;
		float sum = 0.0;
		for (int i = 0 ; i < n; i++)
		{
			scanf("%d", &tmp);
			sum += tmp;
			if (tmp < _min)	 _min = tmp;
			if (tmp > _max)  _max = tmp;
		}
		printf("%.2f\n", (sum - _min - _max) / (n - 2));
	}
	return 0;
}
