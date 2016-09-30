#include<iostream>
using namespace std;
int main()
{
	int n, m;
	int tmp;
	while (cin>>n>>m)
	{
		if (n == 0 && m == 0) break;
		bool flag = 0;
		for (int i = 0; i < n; i++)
		{
			cin>>tmp;
			if (m < tmp && flag == 0)
			{
				if (i == 0)
					printf("%d %d", m, tmp);
				else
					printf(" %d %d", m, tmp);
				flag = 1;
			}
			else
			{
				if (i == 0)
					printf("%d", tmp);
				else
					printf(" %d", tmp);
			}
		}
		printf("\n");
	}
}
