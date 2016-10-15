/* Problem ID: 1004
 * Author: YQ_Beyond
 * Run ID: 10825053
 * Exe Time: 0MS
 * Exe Memory: 308K
 * Code Len: 1166 B
 * Language: C++
 */

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        if(N==0)
            break;
        char balloon_color[1000][15];//气球颜色
        for(int i=0;i<N;i++)
            cin>>balloon_color[i];
        char color_type[1000][15];//气球颜色种类
        int count_color_type[1000]={1};//气球颜色种类计数
        strcpy(color_type[0],balloon_color[0]);
        int sign_color=1;//气球颜色种类标记
        for(int i=1;i<N;i++)
            for(int j=0;j<sign_color;j++)
               if(strcmp(balloon_color[i],color_type[j])==0)
               {
                   count_color_type[j]++;
                   break;
               }
               else if(j==sign_color-1)
               {
                   strcpy(color_type[sign_color],balloon_color[i]);
                   count_color_type[sign_color]++;
                   sign_color++;
               }
        int Max=0;
        for(int i=1;i<sign_color;i++)
            if(count_color_type[i]>count_color_type[Max])
                Max=i;
        cout<<color_type[Max]<<endl;
    }
    return 0;
}
