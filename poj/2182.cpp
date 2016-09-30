#include <list>      
#include <queue>     
#include <stack>    
#include <vector>   
#include <algorithm>
#include <iterator> 
#include <map>       
#include <set>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
              
typedef long long ll;
                    
using namespace std;
                     
#define maxn 10000  
                     
int N;               
                    
ll C[maxn];         
              
void lowbit(int x)  
{
    int i, j;                         
    for (int i = x; i <= N; i += lowbit(i))
    {            
        int j = y;             
        while(j <= N)          
        {        
            C[i][j] += d;      
            j += lowbit(j);    
        }        
    }            
}                
                 
ll sum(int x, int y)           
{                
    ll s = 0;    
    for (int i = x; i > 0; i -= lowbit(i))
    {            
        int j = y;
        while ( j > 0)         
        {        
            s += C[i][j];      
            j -= lowbit(j);    
        }        
    }            
    return s;    
}                
                 
int main(){      
    freopen("in.txt", "r", stdin);
    int data;    
    scanf("%d", &N)            
    {            
        for (int i = 1; i <= N-1; i++)
        {        
            scanf("%d", &data);
        }        
    }            
    return 0;    

