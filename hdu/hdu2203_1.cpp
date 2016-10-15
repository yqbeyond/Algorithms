/* Problem ID: 2203
 * Author: YQ_Beyond
 * Run ID: 10850332
 * Exe Time: 0MS
 * Exe Memory: 528K
 * Code Len: 484 B
 * Language: C++
 */

#include<iostream>
#include<cstring>
using namespace std;
char s1[100005],s2[10005],s3[200010];
int main()
{
    while(cin>>s1>>s2)
    {
        char *p1=strchr(s1,'\0'),*p11=s1,*p2=strchr(s2,'\0'),*p22=s2;
        strcat(s3,s1);
        strcat(s3,s1);
        //cout<<s3<<endl;
        if(strstr(s3,s2)!=NULL&&(p1-p11)>=(p2-p22))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        memset(s3,'\0',sizeof(s3));
    }
    return 0;
}
