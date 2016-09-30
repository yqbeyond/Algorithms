/* Problem ID: 1936
 * Author: 1307010418
 * Memory: 832K
 * Time: 79MS
 */

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char s1[100000],s2[100000];
	while(cin>>s1>>s2)
	{
		long len1=strlen(s1);
		long len2=strlen(s2);
		long i=0;
		long j=0;
		while(true)
		{
			if(i==len1)
			{
				cout<<"Yes"<<endl;
				break;
			}
			else if(i<len1 && j==len2)
			{
				cout<<"No"<<endl;
				break;
			}
			if(s1[i]==s2[j])
			{
				i++;
				j++;
			}
			else
				j++;
		}
		memset(s1,&#39;\0&#39;,sizeof(s1));
		memset(s2,&#39;\0&#39;,sizeof(s2));
	}
	return 0;
}
