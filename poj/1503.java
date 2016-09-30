/* Problem ID: 1503
 * Author: 1307010418
 * Memory: 3288K
 * Time: 641MS
 */

import java.io.*;
import java.math.*;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){

        Scanner cin = new Scanner(new BufferedInputStream(System.in));

        BigInteger n;
        BigInteger sum = new BigInteger("0");

        while(cin.hasNext()){

            BigInteger zero = new BigInteger("0");
            n = cin.nextBigInteger();
            if(n.compareTo(zero)==0)break;
            sum = sum.add(n);
        }
        System.out.println(sum);
        }
    }
