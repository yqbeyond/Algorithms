/* Problem ID: 1907
 * Author: YQ_Beyond
 * Run ID: 11944996
 * Exe Time: 234MS
 * Exe Memory: 5672K
 * Code Len: 1107 B
 * Language: Java
 */

/*#include<iostream>
using namespace std;

int main()
{
    int t,n,s,x,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool tt=false;
        for(int i=s=0;i<n;i++)
        {
            cin>>x;
            if(x>1)
                tt=true;
            s^=x;
        }
        if((s&&tt)||(!s&&!tt))
            cout<<"John"<<endl;
        else
            cout<<"Brother"<<endl;
    }
    return 0;
}*/

import java.util.*;

public class Main
{
    public static void main(String [] args)
    {
        Scanner cin=new Scanner(System.in);
        int n,s,x;
        int t=cin.nextInt();
        while(t!=0)
        {
            n=cin.nextInt();
            int tt=0;
            s=0;
            for(int i=0;i<n;i++)
            {
                x=cin.nextInt();
                if(x>1)
                    tt=1;
                s^=x;
            }
            if((s!=0&&tt!=0)||(s==0&&tt==0))
                System.out.println("John");
            else
                System.out.println("Brother");
            t--;
        }
    }
}
