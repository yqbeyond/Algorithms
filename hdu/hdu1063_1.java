/* Problem ID: 1063
 * Author: YQ_Beyond
 * Run ID: 11923142
 * Exe Time: 375MS
 * Exe Memory: 6092K
 * Code Len: 686 B
 * Language: Java
 */

import java.io.*;
import java.util.*;
import java.math.*;
public class Main{
    public static void main(String[] args){
        Scanner cin = new Scanner(System.in);

        while(cin.hasNextBigDecimal()){

            BigDecimal num = cin.nextBigDecimal();

            int n = cin.nextInt();
            num = num.pow(n);
            String r = num.stripTrailingZeros().toPlainString();
            if(r.startsWith("0.")){
                r = r.substring(1);
            }
            System.out.println(r);
        }
    }
}
//num.pow(int n)方法的功能是计算一个数的幂；

//num.stripTrailingZeros()方法的功能是返回不大于此数但是除去尾部0的数值（可能返回带有指数字段形式）。

//num.toPlainString()方法的功能是转换为相应的字符串，不带指数字段的字符串形式。
