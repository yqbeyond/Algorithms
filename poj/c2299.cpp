#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=500010;
typedef long long LL;
int c[N],b[N],n;
struct node{
    int val,pos;
    bool operator <(const node &a)const{
        return val<a.val;
    }
}a[N];
int lowbit(int x)
{
    return x&(-x);
}
void update(int x,int num)
{
    while(x<=N)
    {
        c[x]+=num;
        x+=lowbit(x);
    }
}
LL sum(int x)
{
    LL s=0;
    while(x>0)
    {
        s+=c[x];
        x-=lowbit(x);
    }
    return s;
}
int main()
{
    int i;
    freopen("in.txt", "r", stdin);
    while(scanf("%d",&n)&&n)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i].val);
            a[i].pos=i;
        }
        sort(a+1,a+n+1);
        for(i=1;i<=n;i++)
            b[a[i].pos]=i;
        memset(c,0,sizeof(c));
        LL ans=0;
        for(i=1;i<=n;i++)
        {
            update(b[i],1);
            ans+=i-sum(b[i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}
