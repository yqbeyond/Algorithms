/* Problem ID: 1013
 * Author: 1307010418
 * Memory: 140K
 * Time: 0MS
 */

#include <cstdio>
#define N 1000
char ch1[3][N],ch2[3][N],ch3[3][N];
bool checked(int a,int v)
{
    char A=a+&#39;A&#39;;
    for(int i=0;i<3;++i)
    {
        int sum1=0,sum2=0;
        for(int j=0;ch1[i][j];++j) sum1+=(ch1[i][j]==A ? v : 1 );
        for(int j=0;ch2[i][j];++j) sum2+=(ch2[i][j]==A ? v : 1 );
        if(ch3[i][0]==&#39;e&#39; && sum1!=sum2) return 0;
        if(ch3[i][0]==&#39;u&#39; && sum1<=sum2) return 0;
        if(ch3[i][0]==&#39;d&#39; && sum1>=sum2) return 0;
    }
    return 1;
}
void workout()
{
    for(int i=0;i<3;++i) scanf("%s%s%s",ch1[i],ch2[i],ch3[i]);
    for(int i=0;i<26;++i)
    {
        if(checked(i,0)) printf("%c is the counterfeit coin and it is light. \n",char(i+&#39;A&#39;));
        if(checked(i,2)) printf("%c is the counterfeit coin and it is heavy. \n",char(i+&#39;A&#39;));
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--) workout();
}