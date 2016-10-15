/* Problem ID: 2054
 * Author: YQ_Beyond
 * Run ID: 11742795
 * Exe Time: 328MS
 * Exe Memory: 5732K
 * Code Len: 389 B
 * Language: Java
 */

import java.math.BigDecimal;
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner cin = new Scanner(System.in);
        BigDecimal a,b;
        while(cin.hasNext()){
            a=cin.nextBigDecimal();
            b=cin.nextBigDecimal();
            if(a.compareTo(b)==0)
                System.out.println("YES");
            else
                System.out.println("NO");
        }


    }
}
