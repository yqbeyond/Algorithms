/* Problem ID: 1058
 * Author: YQ_Beyond
 * Run ID: 11791624
 * Exe Time: 500MS
 * Exe Memory: 336K
 * Code Len: 983 B
 * Language: C++
 */

#include<iostream>
using namespace std;
#define LL long long
LL num[5843];

int main(){
    num[1]=1;
    int i,j,k;
    int prime[4]={2,3,5,7};
    for(i=2;i<=5842;i++){
        num[i]=2000000001;
        for(j=0;j<4;j++)
            for(k=i-1;k>=1;k--){
                if(num[k]*prime[j]<=num[i-1])
                    break;
                if(num[k]*prime[j]<num[i])
                    num[i]=num[k]*prime[j];
            }
    }


    int n;
    while(cin>>n&&n){//scanf("%d",&n) && n){
        cout<<"The "<<n;//printf("The %d",n);
        if(n%10==1 && n%100!=11)
            cout<<"st ";//printf("st ");
        else if(n%10==2 && n%100!=12)
            cout<<"nd ";//printf("nd ");
        else if(n%10==3 && n%100!=13)
            cout<<"rd ";//printf("rd ");
        else
            cout<<"th ";//printf("th ");
        cout<<"humble number is "<<num[n]<<'.'<<endl;//printf("humble number is %I64d.\n",num[n]);
    }
    return 0;
}
