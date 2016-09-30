/* Problem ID: 1845
 * Author: 1307010418
 * Memory: 464K
 * Time: 16MS
 */

#include<stdio.h>
#include<string.h>
#include<math.h>
#define M 9901
#define N 10000
#define clear(arr,val) memset(arr,val,sizeof(arr))

typedef long long  L;
int prim[N];
int sum[N];
int res;
L __pow( L p,L n)
{
    L res=1;
    while(n)
    {
        if(1&n) res=(res*p)%M;
            p=(p%M*p%M)%M;
            n=n>>1;
    }
    return res;
}
L _pow(L  n,L  m)
{
    if(n==0) return 0;
    else if(n==1||m==0) return 1;
    else
    {
    if(m&1) return (_pow(n,m/2)%M*(1+__pow(n,m/2+1))%M)%M;
        else   return( _pow(n,m/2-1)%M*(1+__pow(n,m/2+1))%M)%M+__pow(n,m/2)%M;
    }
}
int main()
{
    int i,count=0,a,b;
    scanf("%d%d",&a,&b);
    clear(prim,0);
    clear(sum,0);

    for(i=2;i*i<=a;++i)
    {
        if(a%i==0)
        {
            prim[++count]=i;
            while(a%i==0)
            {
                sum[count]++;
                a/=i;
            }
        }
    }
    if(a!=1) prim[++count]=a,sum[count]=1;
    L ans=1;
    for(i=1;i<=count;++i)
        if(sum[i])  ans=ans*_pow(prim[i],sum[i]*b)%M;
        printf("%d\n",ans);
    return 0;
}
