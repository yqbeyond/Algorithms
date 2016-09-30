/* Problem ID: 1001
 * Author: 1307010418
 * Memory: 3356K
 * Time: 172MS
 */

import java.math.BigDecimal;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        while (cin.hasNext()) {
            BigDecimal R = cin.nextBigDecimal();
            int n = cin.nextInt();
            R = R.pow(n);
            String str = R.stripTrailingZeros().toPlainString();
            if (str.startsWith("0."))
                str = str.substring(1);
            System.out.println(str);
            }
        }
}
