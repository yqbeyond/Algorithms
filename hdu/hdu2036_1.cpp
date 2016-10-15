/* Problem ID: 2036
 * Author: YQ_Beyond
 * Run ID: 17622447
 * Exe Time: 0MS
 * Exe Memory: 1600K
 * Code Len: 642 B
 * Language: G++
 */

#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

using namespace std;

typedef struct Point{
    int x;
    int y;
} Point;

Point point[105];

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(cin>>n, n!=0)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d%d", &point[i].x, &point[i].y);
        }
        double area = 0.0;
        for (int i = 1; i < n - 1; i++)
        {
            area += 0.5 * (double)(point[0].x*point[i].y + point[i].x*point[i+1].y + point[i+1].x*point[0].y - point[0].x*point[i+1].y - point[i].x*point[0].y - point[i+1].x*point[i].y);
        }
        printf("%.1lf\n", area);
    }
    return 0;
}