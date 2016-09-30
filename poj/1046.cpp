/* Problem ID: 1046
 * Author: 1307010418
 * Memory: 236K
 * Time: 16MS
 */

#include<iostream>
#include<cmath>
//#include<fstream>
using namespace std;
//fstream fin("test.txt");
int main()
{
    int a[16][3];
    for(int i=0;i<16;i++)
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    int x,y,z;
    while(cin>>x>>y>>z)
    {
        if(x==-1&&y==-1&&z==-1)
            break;
        int smallest_distance=255*255*3;
        int x1=a[0][0],y1=a[0][1],z1=a[0][2];
        int distance;
        for(int i=0;i<16;i++)
        {
            distance=(x-a[i][0])*(x-a[i][0])+(y-a[i][1])*(y-a[i][1])+(z-a[i][2])*(z-a[i][2]);
            if(distance<smallest_distance)
            {
                   smallest_distance=distance;
                   x1=a[i][0];
                   y1=a[i][1];
                   z1=a[i][2];
            }
        }
        cout<<&#39;(&#39;<<x<<&#39;,&#39;<<y<<&#39;,&#39;<<z<<&#39;)&#39;<<" maps to "<<&#39;(&#39;<<x1<<&#39;,&#39;<<y1<<&#39;,&#39;<<z1<<&#39;)&#39;<<endl;
    }
    return 0;
}
