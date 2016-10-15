/* Problem ID: 2148
 * Author: YQ_Beyond
 * Run ID: 10871650
 * Exe Time: 0MS
 * Exe Memory: 316K
 * Code Len: 528 B
 * Language: C++
 */

#include<iostream>
using namespace std;
int score[1005];
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,student_number;
        cin>>N>>student_number;
        int sscore;
        for(int i=0;i<N;i++)
        {
            cin>>score[i];
            if(student_number==i+1)
                sscore=score[i];
        }
        int counter=0;
        for(int i=0;i<N;i++)
            if(score[i]>sscore)
               counter++;
        cout<<counter<<endl;
    }
    return 0;
}
