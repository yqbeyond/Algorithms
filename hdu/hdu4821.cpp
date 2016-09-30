#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <map>

int M, L;
char str[100005];
//unsigned int table[100005];

using namespace std;

int cmp(const void *a, const void *b)
{
	return *(unsigned int *) a - *(unsigned int *) b;
}

map <unsigned int, int> mp;
map <unsigned int, int>::iterator it;

int main()
{
	freopen("in.txt", "r", stdin);
	while (~scanf("%d%d", &M, &L))
	{
		scanf("%s", str);
		int len = strlen(str);
		int _count = 0;
		int str_len = M * L;

		for (int k = 0; k < len - str_len + 1; k++)
		{
			mp.clear();
//			int index = 0;
			for (int i = k; i < k + str_len - L + 1; i += L)
			{
				unsigned int _hash = 0;
				for (int j = i; j < i + M; j++)
				{
					_hash = _hash * 131 + str[j];
				}
				//table[index++] = _hash & 0x7fffffff;
				mp[_hash&0x7fffffff] ++;
			}

//			qsort(table, index, sizeof(table[0]), cmp);
			
			bool flag = 1;
			for (it=mp.begin(); it != mp.end(); it++)
			{
				if ((*it).second > 1)
					flag = 0;
	//			printf("%d ", (*it).second);
			}
	//		printf("\n");
			if (flag )
				_count ++;
		}

		printf("%d\n", _count);
	}
	return 0;
}
