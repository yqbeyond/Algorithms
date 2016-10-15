/* Problem ID: 1597
 * Author: YQ_Beyond
 * Run ID: 11204799
 * Exe Time: 15MS
 * Exe Memory: 216K
 * Code Len: 506 B
 * Language: C
 */

#include<math.h>
#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    while(k--)
    {
        long long t,i;
        scanf("%I64d",&t);
        for(i=(int)sqrt((double)(t*2));;++i)
            if(i*(i+1)/2>=t)
                break;
        --i;
        if(i==0)
        printf("%d\n",1);
        else
        {
            t-=i*(i+1)/2;
            if(t%9==0)
                printf("%d\n",9);
            else
                printf("%d\n",t%9);
        }
    }
}
