/* Problem ID: 2442
 * Author: 1307010418
 * Memory: 764K
 * Time: 3032MS
 */

#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(int a,int b)
{
   return a < b;
}
int main()
{
    int T,m,n,i,j,k,temp,ans=0;
    vector<int>data1,data2,dataQ;

    cin>>T;

    while(T--)
    {
         data1.clear();
         cin>>m>>n;
         for(i=0;i<n;i++)
         {
             cin>>temp;
             data1.push_back(temp);
         }

         for(i=1;i<m;i++)
         {
             sort(data1.begin(),data1.end(),cmp);
             data2.clear();
             dataQ.clear();

             for(j=0;j<n;j++)
             {
                 cin>>temp;
                 data2.push_back(temp);
             }

             sort(data2.begin(),data2.end(),cmp);
             for(j=0;j<n;j++)
                 dataQ.push_back(data1[j]+data2[0]);

             make_heap(dataQ.begin(),dataQ.end(),cmp);
             for(j=1;j<n;j++)
             {
                for(k=0;k<n;k++)
                {
                    temp=data1[k]+data2[j];
                    if(temp>=dataQ[0])
                        break;
                    pop_heap(dataQ.begin(),dataQ.end(),cmp);
                    dataQ.pop_back();
                    dataQ.push_back(temp);
                    push_heap(dataQ.begin(),dataQ.end(),cmp);
                }
            }
            copy(dataQ.begin(),dataQ.end(),data1.begin());
         }

         sort(data1.begin(),data1.end(),cmp);
         for(i=0;i<n-1;i++)
             printf("%d ",data1[i]);

         printf("%d\n",data1[n-1]);
     }
     return 0;
 }
