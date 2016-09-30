#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

char str[100005];

int main(){
	while(cin.getline(str, 100005))
	{
		int len = strlen(str);
		for (int i = 0; i < len; i++)
		{
			str[i] -= 7;
		}
		printf("%s\n",str);
	}
	return 0;
}
