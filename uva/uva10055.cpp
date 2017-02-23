#include <iostream>

typedef long long ll;
using namespace std;

int main()
{
	ll a, b;
	while(cin>>a>>b)
		cout<< (a > b ? a - b : b - a) << endl;
	return 0;
}
