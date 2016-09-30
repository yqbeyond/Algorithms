#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;
int main()
{
	int n;
	int money;
	while (cin>>n, n != 0)
	{
		int num = 0;		
		for (int i = 0; i < n; i++)
		{
			cin>>money;
			num += money / 100;
			money %= 100;
			if (money == 0) continue; else num += money / 50;
			money %= 50;
			if (money == 0) continue; else num += money / 10;
			money %= 10;
			if (money == 0) continue; else num += money / 5;
			money %= 5;
			if (money == 0) continue; else num += money / 2;
			money %= 2;
			if (money == 0) continue; else num += money / 1;
		}
		printf("%d\n", num);
	}
}
