#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;
int main(){
	freopen("in.txt", "r", stdin);
	char str[30];
	int n;
	while (scanf("%d", &n), n)
	{
		int sum = 0;
		int min = 30;
		int len;
		int space_sum;
		char ch = getchar();
		for (int i = 0; i < n; i++)
		{
			cin.getline(str, 30);
			len = strlen(str);
			space_sum = 0;
			for (int j = 0; j < len; j++)
			{
				if (str[j] == ' ')
					space_sum++;
			}
			if (min > space_sum)
				min = space_sum;
			sum += space_sum;
		}
		printf("%d\n", sum - min * n);
	}
	return 0;
}
