/* Problem ID: 1075
 * Author: YQ_Beyond
 * Run ID: 17718230
 * Exe Time: 1778MS
 * Exe Memory: 76424K
 * Code Len: 939 B
 * Language: G++
 */

#include <map>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    map<string, string> mp;
    string start, end;
    string eng, mars;
    cin>>start;
    char words[3005];
    char ch;
    int i;
    string word;

    while(cin>>eng, eng != "END")
    {
        cin>>mars;
        mp[mars] = eng;
    }

    cin >> start; ch = getchar();

    while(1)
    {
        i = 0;
        while(ch = getchar(), ch != '\n')
        {
            words[i++] = ch;
        }
        words[i] = '\0';
        if (strcmp(words, "END") == 0)
            break;
        word = "";
        for (int i = 0; words[i] != '\0'; i++)
        {
            if (!(words[i] >= 'a' && words[i] <= 'z'))
            {
                if (mp[word] != "")
                {
                    cout<<mp[word];
                }
                else
                {
                    cout<<word;
                }
                word = "";
                cout<<words[i];
            }
            else
            {
                word += words[i];
            }
        }
        printf("\n");
    }
    return 0;
}