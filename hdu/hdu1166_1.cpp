/* Problem ID: 1166
 * Author: YQ_Beyond
 * Run ID: 13116013
 * Exe Time: 202MS
 * Exe Memory: 2004K
 * Code Len: 1377 B
 * Language: C++
 */

//树状数组，用于处理数据的动态跟新和动态统计区间。
//查询与修改的时间复杂度均为ln(n)

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

const int maxn = 50005;
int a[maxn];
int c[maxn];
int n;

//巧妙地函数
//获取整数x的二进制存储下，最高的非零位所表示的大小
//（满足2^k<=x的最大的2^k，其中k为非负数，很好理解啦）
//lowbit(x&(x^(x-1)))
int lowbit(int x)
{
    return x&(-x);
}

//动态修改，按照一个斜坡来进行
void modify(int i, int num)
{
    while(i<=n)
    {
        c[i]+=num;
        i+=lowbit(i);
    }
}

//计算从a[1]加到a[i]的和。
int sum(int i)
{
    int sum = 0;
    while(i>0)
    {
        sum += c[i];
        i -= lowbit(i);
    }
    return sum;
}

void init()
{
    for(int i= 1;i<=n;i++)
    {
        //每次输入都相当于是对数组中数据的动态更新，所以每次都要modify
        scanf("%d",&a[i]);
        modify(i,a[i]);
    }
}
int main()
{
    //freopen("data.txt","r",stdin);
    int T, Case = 1;
    scanf("%d",&T);

    while(T--)
    {
        //memset(a,0,sizeof(a));
        memset(c,0,sizeof(c));
        printf("Case %d:\n",Case++);

        scanf("%d",&n);
        init();

        char ch[10];

        int i,j;
        while(scanf("%s",ch),ch[0] != 'E')
        {
            scanf("%d%d",&i,&j);
            switch(ch[0])
            {
                case 'Q':
                printf("%d\n",sum(j)-sum(i-1));
                break;
                case 'A':
                modify(i,j);
                break;
                case 'S':
                modify(i,-j);
                break;
            }
        }
    }
    return 0;
}
