/* Problem ID: 2130
 * Author: YQ_Beyond
 * Run ID: 10871883
 * Exe Time: 0MS
 * Exe Memory: 312K
 * Code Len: 271 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int main()
{
    long long int l,w,h;
    while(cin>>l>>w>>h)
    {
        if(l==-1&&w==-1&&h==-1)
            break;
        else
            cout<<((l*(l+1))/2*(w*(w+1))/2*(h*(h+1))/2)<<endl;
    }
    return 0;
}
