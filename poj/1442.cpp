/* Problem ID: 1442
 * Author: 1307010418
 * Memory: 1076K
 * Time: 500MS
 */

#include<cstdio>
#include<iostream>
#include<queue>
#include<functional>
#include<vector>
using namespace std;
int A[30000];
int main()
{
      priority_queue<int,vector<int>,greater<int> > q1;
      priority_queue<int,vector<int>,less<int> > q2;
      int m,n,c=0,t,u;
      scanf("%d%d",&m,&n);
      for(int i=0;i<m;i++)scanf("%d",&A[i]);
      for(int i=0;i<n;i++)
      {

            cin>>u;//scanf("%d",&u);
            while(c<u)
            {
                  q1.push(A[c]);
                  if(!q2.empty()&&q1.top()<q2.top())
                  {
                        t=q1.top();
                        q1.pop();
                        q1.push(q2.top());
                        q2.pop();
                        q2.push(t);
                  }
                  c++;
            }
            cout<<q1.top()<<endl;//printf("%d\n",q1.top());
            q2.push(q1.top());
            q1.pop();
      }
      return 0;
}
