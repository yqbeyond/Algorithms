/* Problem ID: 2389
 * Author: 1307010418
 * Memory: 708K
 * Time: 0MS
 */

#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
using namespace std;

const int maxn = 100;
void reverse(char a[])
{
    int len = strlen(a);
    for(int i = 0 ; i < len / 2; i++)
    {
        int temp = a[i];
        a[i] = a[len - i - 1];
        a[len - i -1] = temp;
    }
}
int main()
{
    char a[maxn],b[maxn];
    int t[100] = {0};
    //printf("Please enter 2 numbers: ");
    scanf("%s%s",a,b);
    reverse(a);
    reverse(b);
    if(strcmp(a,"0")==0||strcmp(b,"0")==0)
        cout<<"0"<<endl;
    else
    {
        int i,j;
        for(i = 0; i <strlen(b); i++)
        {
            int cnt = 0;
            for(j = 0; j < strlen(a); j++)
            {
                int temp = (b[i] - &#39;0&#39;) * (a[j] - &#39;0&#39;);
                int tt= t[i+j] + temp + cnt;
                t[j+i] = tt % 10;
                cnt = tt / 10;
            }
            while(cnt != 0)
            {
                t[j+i] = cnt % 10;
                cnt = cnt / 10;
                j++;
            }
        }
        for(int k = i + j - 2; k >= 0; k--)
        {
            cout<<t[k];
        }
    }
    return 0;
}
