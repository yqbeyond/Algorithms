/* Problem ID: 1035
 * Author: 1307010418
 * Memory: 588K
 * Time: 110MS
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Find(int a);
int n;
int lend[10001];
char Dt[10001][20],In[20],len;
int Find(int a)
{
    int i,t;
    t=lend[a]-len;
    if (t==-1)//
    {
        for (i=0; i<lend[a]&&Dt[a][i]==In[i]; i++);
        for (; i<lend[a]&&Dt[a][i]==In[i+1]; i++); //忽略了In中的一个字符
        if (i==lend[a]) return 0;
    }
    else if (t==0)
    {
        for (i=0; i<len&&Dt[a][i]==In[i]; i++);
        for (i++; i<len&&Dt[a][i]==In[i]; i++); //忽略了两个词中的一处不同
        if (i==len) return 0;
    }
    else if (t==1)
    {
        for (i=0; i<len&&Dt[a][i]==In[i]; i++);
        for (; i<len&&Dt[a][i+1]==In[i]; i++); //忽略了Dt[a]中的一个字符
        if (i==len) return 0;
    }
    return 1;
}
int main()
{
    int i;
    scanf("%s",&Dt[0][0]);//是应该这么写的吗？
    while (Dt[n][0]!=&#39;#&#39;)
    {
        lend[n]=strlen(Dt[n]);
        scanf("%s",&Dt[++n][0]);
    }
    scanf("%s",In);
    while (In[0]!=&#39;#&#39;)
    {
        len=strlen(In);
        for (i=0; i<n; i++)
            if (lend[i]==len&&strcmp(Dt[i],In)==0)
            {
                printf("%s is correct\n",In);
                break;
            }
        if (i==n)
        {
            printf("%s:",In);
            for (i=0; i<n; i++)
                if (Find(i)==0) printf(" %s",Dt[i]);
            printf("\n");
        }
        scanf("%s",In);
    }
    return 0;
}
