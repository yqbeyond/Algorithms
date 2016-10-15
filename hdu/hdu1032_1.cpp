/* Problem ID: 1032
 * Author: YQ_Beyond
 * Run ID: 11742499
 * Exe Time: 0MS
 * Exe Memory: 308K
 * Code Len: 489 B
 * Language: C++
 */

#include<iostream>
#include<algorithm>
using namespace std;

int f(int m);
int array[10000000];

int main(){
    int a,b,temp;
    while(cin>>a>>b){
        cout<<a<<' '<<b<<' ';
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        for(int i=a;i<=b;i++){
            array[i-a]=f(i);
        }
        sort(array,array+b-a+1);
        cout<<array[b-a]<<endl;
    }
    return 0;
}
int f(int m){
    int k=1;
    while(m!=1){
        if(m%2==0){
            m/=2;
            k++;
        }
        else{
            m=3*m+1;
            k++;
        }
    }
    return k;
}
