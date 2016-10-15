/* Problem ID: 2028
 * Author: YQ_Beyond
 * Run ID: 17617996
 * Exe Time: 15MS
 * Exe Memory: 1596K
 * Code Len: 552 B
 * Language: G++
 */

#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

typedef unsigned long long ull;

ull gcd(ull x, ull y)
{
    ull t;
    while(y > 0) {
        t = x % y;
        x = y;
        y = t;
    }
    return x;
}

ull lcm(ull x, ull y)
{
    return x * (y / gcd(x, y));
}

using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    ull n;
    ull a, b;
    while (cin>>n)
    {    
        cin>>a>>b;
        ull ans = lcm(a, b);
        n -= 2;
        while (n--)
        {
            cin>>a;
            ans = lcm(ans, a);
        }
        printf("%lld\n", ans);
    }
    return 0;
}