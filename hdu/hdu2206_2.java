/* Problem ID: 2206
 * Author: YQ_Beyond
 * Run ID: 10856859
 * Exe Time: 171MS
 * Exe Memory: 5004K
 * Code Len: 453 B
 * Language: Java
 */

import java.util.*;

public class Main {
    public static void main(String [] s)
    {
        Scanner scan=new Scanner(System.in);
        while(scan.hasNext())
        {
            if (scan.nextLine().matches("((?:25[0-5]|2[0-4]\\d{1}|1\\d{2}|\\d{2}|\\d{1})\\.){3}(?:25[0-5]|2[0-4]\\d{1}|1\\d{2}|\\d{2}|\\d{1})"))
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
