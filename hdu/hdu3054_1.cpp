/* Problem ID: 3054
 * Author: YQ_Beyond
 * Run ID: 11922464
 * Exe Time: 15MS
 * Exe Memory: 336K
 * Code Len: 826 B
 * Language: G++
 */

#include <iostream>
using namespace std;

int solve( int start , int i){
    
    int times = 1,s;
    
    if(start == 1)
        times = 15;
    else if(start == 2)
        times = 150;
    else {
            
        times = 750;
        start -= 3;
        while(start--)
            times *= 10;
    }
    
    if(start == 2) {
        if( i % 4 == 0)
            s = (i + i/4 - 1)*times;
        else
            s = (i + i/4)*times;
    }
    else {
        if( i % 9 == 0)
            s = (i + i/9 - 1)*times;
        else
            s = (i + i/9)*times;
    }
    return s;
}
int main() {
    int T,m,k;
    cin>>T;//scanf("%d",&T);
    while(T--) {
        cin>>m>>k;//scanf("%d %d",&m,&k);
        cout<<solve(m,k)<<endl;//printf("%d\n",solve(m,k));
    }
    return 0;
}
