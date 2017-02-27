#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

char master[105];
char drivern[105];
char buf[105];

int main()
{
	int high = '1' + '2';
	while(scanf("%s%s", master, drivern) != -1)
	{
		int master_len = strlen(master);
		int drivern_len = strlen(drivern);		

		if (master_len < drivern_len)
		{
			strcpy(buf, master);
			strcpy(master, drivern);
			strcpy(drivern, buf);
			int tmp = master_len;
			master_len = drivern_len;
			drivern_len = tmp;
		}

		int res = drivern_len + master_len;
		int len;
		int step = 0;
		while (step < drivern_len + master_len)
		{
			step ++;
			int i = step < drivern_len ? 0 : step - drivern_len;
			int j = step < drivern_len ? drivern_len - step : 0;
			//printf("i: %d, j: %d\n", i, j);

			while (i < master_len && j < drivern_len)
			{
				if (master[i] + drivern[j] <= high)
				{
					i++;
					j++;
				}
				else
					break;
			}

			if (i == master_len || j == drivern_len)
			{
				if (step < drivern_len)				
					len = drivern_len + master_len - step;					
				else if (step >= drivern_len && step <= master_len)
					len = master_len;
				else
					len = step;
				if (len < res)
					res = len;
			}
		}

		printf("%d\n", res);
	}
}
