/* Problem ID: 2506
 * Author: 1307010418
 * Memory: 3964K
 * Time: 329MS
 */

import java.util.Scanner;
import java.math.BigInteger;

public class Main {
	public static void main(String [] args)
	{
		Scanner cin = new Scanner(System.in);
		BigInteger a [] = new BigInteger[300];
		BigInteger b = new BigInteger("2");
		a[0] = BigInteger.valueOf(1);
		a[1] = BigInteger.valueOf(1);
		a[2] = BigInteger.valueOf(3);
		a[3] = BigInteger.valueOf(5);
		
		int n;
		
		for (int i = 3; i <= 255; i++)
		{
			a[i] = a[i-1].add(a[i-2].multiply(b));
		}
		
		while (cin.hasNext())
		{
			n = cin.nextInt();
			System.out.println(a[n]);
		}
		cin.close();
	}
}
