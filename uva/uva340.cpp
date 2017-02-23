#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int code[1005];
int guess[1005];

/*void print(vector<int> vec)
{
	for(int i = 0; i < vec.size(); i++)
	{
		printf("%d ", vec[i]);
	}
	printf("\n");
}
*/
int main()
{
	freopen("in.txt", "r", stdin);
	int N, Game = 1, i, j;
	while(scanf("%d", &N) != -1 && N)
	{
		printf("Game %d:\n", Game++);
		for(i = 0; i < N; i++)
		{
			scanf("%d", &code[i]);
		}
		
		while(1)
		{
			vector<int> v_code(code, code + N);
			vector<int>::iterator it_code = v_code.begin();

			int A = 0, B = 0;			
			for(i = 0; i < N; i++)
			{
				scanf("%d", &guess[i]);
			}

			vector<int> v_guess(guess, guess + N);
			vector<int>::iterator it_guess = v_guess.begin();

			if(guess[0] == 0)
				break;

			while(it_code != v_code.end())
			{
				if (*it_code == *it_guess)
				{
					v_code.erase(it_code);
					v_guess.erase(it_guess);
					A++;
					it_code --;
					it_guess --;
				}
				it_code ++;
				it_guess ++;
			}

//			printf("code: "); print(v_code);
//			printf("guess: "); print(v_guess);

			it_code = v_code.begin();

			while(it_code != v_code.end())
			{
				it_guess = v_guess.begin();
				while(it_guess != v_guess.end())
				{
					if(*it_code == *it_guess)
					{
						B++;
						v_guess.erase(it_guess);
						break;
					}
					it_guess ++;
				}
				it_code ++;
			}

			printf("    (%d,%d)\n", A, B);
		}
	}
}
