/* Problem ID: 3267
 * Author: 1307010418
 * Memory: 732K
 * Time: 204MS
 */

#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>
using namespace std;

//ifstream fcin("test.txt");

#define fcin cin

int main()
{
    char words[600][26];
    char inw[301];
    int W, L;

    fcin>>W>>L;
    fcin>>inw;
    for (int i = 0; i < W; ++i)
        fcin>>words[i];

    int del[301];
    del[L] = 0;
    for(int i = L - 1 ; i >= 0 ; --i)
    {
        del[i] = 301;
        for(int j = 0 ; j < W ; j ++)
        {
            int k = 0,l = i;
            for(;words[j][k] && l < L; ++l)
                if(words[j][k] == inw[l])k++;

            if(!words[j][k])
                del[i] = min(min(del[i],del[i + 1] + 1),del[l] + l - i - k);
            else
                del[i] = min(del[i], del[i + 1] + 1);
        }
    }
    cout<<del[0]<<endl;
    return 0;
}
