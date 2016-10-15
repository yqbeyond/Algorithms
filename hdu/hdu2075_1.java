/* Problem ID: 2075
 * Author: YQ_Beyond
 * Run ID: 11742977
 * Exe Time: 203MS
 * Exe Memory: 4968K
 * Code Len: 359 B
 * Language: Java
 */

import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner cin = new Scanner(System.in);
        long a,b;
        int T=cin.nextInt();
        while(T!=0){
            a=cin.nextLong();
            b=cin.nextLong();
            if(a%b==0)
                System.out.println("YES");
            else
                System.out.println("NO");
            T--;
        }
    }
}
