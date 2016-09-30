/* Problem ID: 1753
 * Author: 1307010418
 * Memory: 196K
 * Time: 204MS
 */

#include<iostream>
#include<cstdio>
using namespace std;

int map[4][4],step,flag=0;
void turn(int i,int j)//转换
{
    map[i][j]=!map[i][j];
    if(i>0)
        map[i-1][j]=!map[i-1][j];
    if(i<3)
        map[i+1][j]=!map[i+1][j];
    if(j>0)
        map[i][j-1]=!map[i][j-1];
    if(j<3)
        map[i][j+1]=!map[i][j+1];
}
int range()//判定表格是否全部一样
{
    int i,j;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(map[i][j]!=map[0][0])
                return 0;
    return 1;
}
int DFS(int i,int j,int dp)//深搜
{
    if(dp==step)
    {
        flag=range();
        return 0;
    }
    if(flag||i==4)
        return 1;
    turn(i,j);
    if(j<3)DFS(i,j+1,dp+1);
    else DFS(i+1,0,dp+1);
    turn(i,j);
    if(j<3)DFS(i,j+1,dp);
    else DFS(i+1,0,dp);
    return 0;
}
int main()
{
    int i,j;
    char a;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>a;
            if(a==&#39;b&#39;)map[i][j]=0;
            else map[i][j]=1;
        }
        getchar();
    }
    for(step=0;step<=16;step++)
    {
        flag=0;
        DFS(0,0,0);
        if(flag)break;
    }
    if(flag)printf("%d\n",step);
    else printf("Impossible\n");
    return 0;
}
