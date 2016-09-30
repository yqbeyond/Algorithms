/* Problem ID: 3096
 * Author: 1307010418
 * Memory: 696K
 * Time: 32MS
 */

#include<iostream>
#include<string>
#include<string.h>
#include<map>
using namespace std;

int main()
{
	char s[80];
	while(cin>>s && s[0]!=&#39;*&#39;)
	{
		int len=strlen(s);
		if(len<=2)
		{
			cout<<s<<" is surprising."<<endl;
			continue;
		}

		bool mark=true;
		for(int d=0;d<=len-2;d++)
		{
			map<string,bool>flag;

			bool sign=true;
			for(int i=0;i<=len-d-2;i++)
			{
				char pair[3]={s[i],s[i+d+1],&#39;\0&#39;};

				if(!flag[ pair ])
					flag[ pair ]=true;
				else
				{
					sign=false;
					break;
				}
			}
			if(!sign)
			{
				mark=false;
				break;
			}
		}
		if(mark)
			cout<<s<<" is surprising."<<endl;
		else
			cout<<s<<" is NOT surprising."<<endl;
	}
	return 0;
}
