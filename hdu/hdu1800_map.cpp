#include <iostream>
#include <cstdio>
#include <map>
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	freopen("in.txt", "r", stdin);
    int n;
    while(scanf("%d",&n)==1)
    {
        int i;
        map<string,int> mp;
        int max=0;
        for(i=0;i<n;i++)
        {
            string level;
//            scanf("%s",&level);
	cin>>level;
            mp[level]++;
            if(mp[level]>max)
            {
                max=mp[level]; 
            }
        }
        printf("%d\n",max);
    }
    return 0;
}

