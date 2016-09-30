/* Problem ID: 1205
 * Author: 1307010418
 * Memory: 3084K
 * Time: 282MS
 */

import java.io.*;
import java.math.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner cin = new Scanner(System.in);

        BigInteger [] arr = new BigInteger[105];

        arr[1] =new  BigInteger("1");
        arr[2] =new  BigInteger("3");

        for(int i = 3; i <= 100; i ++)
            arr[i] = arr[i-1].multiply(new BigInteger("3")).subtract(arr[i-2]);
        while(cin.hasNext()){

            int n = cin.nextInt();
            System.out.println(arr[n]);
        }
    }
}
