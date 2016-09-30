/* Problem ID: 1837
 * Author: 1307010418
 * Memory: 1360K
 * Time: 32MS
 */

#include <iostream>
#include<cstring>

using namespace std;
int w[21],h[21],t[21][8000];
int main()
{
    int c,g,i,j,k;
    while(cin>>c>>g)
    {
        for(i=1; i<=c; i++)
            cin>>h[i];
        for(i=1; i<=g; i++)
            cin>>w[i];
        memset(t,0,sizeof(t));
        for(i=1; i<=c; i++)
            t[1][w[1]*h[i]+4000]++;
        for(i=2; i<=g; i++)
            for(j=1; j<=c; j++)
                for(k=1; k<=8000; k++)
                    if(t[i-1][k])
                        t[i][k+w[i]*h[j]]+=t[i-1][k];

        cout<<t[g][4000]<<endl;

    }
    return 0;
}
