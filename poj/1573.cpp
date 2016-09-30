/* Problem ID: 1573
 * Author: 1307010418
 * Memory: 784K
 * Time: 0MS
 */

    #include <iostream>
    #include <cstring>

    using namespace std;
    string map[102];
    int mk[105][105], move[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
    int r,c,start;

    int Getv(char ch)
    {
        switch(ch)
        {
            case &#39;N&#39;: return 0;
            case &#39;E&#39;: return 1;
            case &#39;S&#39;: return 2;
            case &#39;W&#39;: return 3;
        }
    }

    int main()
    {
        while (cin >> r >> c >> start &&(r&&c&&start))
        {
            for(int i=0;i<r;i++)
                cin >> map[i];
            memset(mk, 0, sizeof(mk) );
            int steps=0;
            int x=0, y=start-1;
            int newx, newy;
            while (true)
            {
                mk[x][y]=++steps;
                int v=Getv(map[x][y]);
                newx=x+move[v][0], newy=y+move[v][1];
                if ( newx<0 || newx>=r || newy<0 || newy>=c )
                {
                    cout << steps << " step(s) to exit"<<endl;
                    break;
                }
                if (mk[newx][newy]!=0)
                {
                    cout << mk[newx][newy]-1 << " step(s) before a loop of " <<
                        steps-mk[newx][newy]+1 << " step(s)"<<endl;
                    break;
                }
                x=newx, y=newy;
            }
        }
        return 0;
    }
