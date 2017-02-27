#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;

struct Pallet{
	int width;
	int height;
};

struct Pallet pallet[6];

int cmp (const struct Pallet p1, const struct Pallet p2)
{
	return  (p1.width == p2.width) ? p1.height < p2.height : p1.width < p2.width;
}

void print(struct Pallet *p)
{
	for (int i = 0; i < 6; i ++)
		printf("%4d %4d\n", p[i].width, p[i].height);
}

int main()
{
	int flag = 0;
	while (1)
	{
		for (int i = 0; i < 6; i++)
		{
			if (scanf("%d%d", &pallet[i].width, &pallet[i].height) != -1)
			{
				if (pallet[i].width > pallet[i].height)
				{
					int tmp = pallet[i].width;
					pallet[i].width = pallet[i].height;
					pallet[i].height = tmp;
				}
			}
			else
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			break;

		sort(pallet, pallet + 6, cmp);

		//print(pallet);
		int ok = 1;

		for (int i = 0; i < 6; i += 2)
		{
			if (!(pallet[i].width == pallet[i+1].width && pallet[i].height == pallet[i+1].height))
			{
				ok = 0;
				break;
			}
		}

		if (ok == 0)
		{
			printf("IMPOSSIBLE\n");
			continue;
		}

		if (pallet[0].width == pallet[2].width && pallet[0].height == pallet[4].width && pallet[2].height == pallet[4].height)
			printf("POSSIBLE\n");
		else
			printf("IMPOSSIBLE\n");
	}
	return 0;
}
