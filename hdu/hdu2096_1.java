/* Problem ID: 2096
 * Author: YQ_Beyond
 * Run ID: 11743095
 * Exe Time: 156MS
 * Exe Memory: 5144K
 * Code Len: 312 B
 * Language: Java
 */

import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner cin = new Scanner(System.in);
        long a,b,c;
        int T=cin.nextInt();
        while(T!=0){
            a=cin.nextLong();
            b=cin.nextLong();
            c=(a+b)%100;
            System.out.println(c);
            T--;
        }
    }
}
