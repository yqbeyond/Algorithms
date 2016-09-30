/* Problem ID: 3080
 * Author: 1307010418
 * Memory: 232K
 * Time: 16MS
 */

#include<iostream>  
#include<cstring>  
using namespace std;  
  
const int len=60;  
  
int main(int i,int j)  
{  
    int T;  
    cin>>T;  
    for(int t=1;t<=T;t++)  
    {  
        int n;
        cin>>n;  
        char** DNA=new char*[n];  
        for(int p=0;p<n;p++)  
        {  
            DNA[p]=new char[len+1];  
            cin>>DNA[p];  
        }  
  
        char obj[len+1];  
        int StrLen=0;    
        int length=1;   
  
        for(i=0;;i++)   
        {  
             
            char dna[len+1];  
            int pi=i;  
            if(pi+length>len)  
            {  
                length++;  
                i=-1;  
                if(length>len)  
                    break;  
                continue;  
            }  
            for(j=0;j<length;j++)  
                dna[j]=DNA[0][pi++];  
            dna[j]=&#39;\0&#39;;  
  
           
            bool flag=true;  
            for(int k=1;k<n;k++)  
                if(!strstr(DNA[k],dna))  
                {  
                    flag=false;  
                    break;  
                }  
  
            
            if(flag)  
            {  
                if(StrLen<length)  
                {  
                    StrLen=length;  
                    strcpy(obj,dna);      
                }  
                else if(StrLen==length)  
                {  
                    if(strcmp(obj,dna)>0)  
                        strcpy(obj,dna);  
                }  
            }  
        }  
  
        if(StrLen<=2)  
            cout<<"no significant commonalities"<<endl;  
        else  
            cout<<obj<<endl;  
  
        delete DNA;  
    }  
    return 0;  
}  