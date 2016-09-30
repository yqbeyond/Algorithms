/* Problem ID: 1002
 * Author: 1307010418
 * Memory: 12416K
 * Time: 3907MS
 */

import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        HashMap<String, Integer> hm = new HashMap<String, Integer>();
        Scanner cin = new Scanner(System.in);
        int col = cin.nextInt();
        for(int i = 0; i < col; i++){
            //每读一次的处理
            StringBuffer sb = new StringBuffer();
            String next = cin.next();
            int len = next.length();
            for(int j = 0; j < len; j++){
                char nc = next.charAt(j);
                if(nc!=&#39;-&#39;){
                    int gm = 0;
                    if(nc>=&#39;0&#39;&&nc<=&#39;9&#39;)gm = (nc-48);
                    else gm = getNum(nc);
                    sb.append(gm);
                }
            }
            String key = sb.toString();
            if(hm.containsKey(key)){
                hm.put(key, hm.get(key)+1);
            }else{
                hm.put(key, 1);
            }
            sb.setLength(0);
        }
        Object[] keys = hm.keySet().toArray();
        Arrays.sort(keys);
        boolean b = false;
        for(Object k : keys){
            String kk = (String)k;
            if(hm.get(kk)>1){
                b = true;
                System.out.println(kk.substring(0,3) + "-" + kk.substring(3) + " "+hm.get(kk));
            }
        }
        if(!b){
             System.out.println("No duplicates.");
        }
    }
    private static int getNum(char c){
        if(c==&#39;A&#39;||c==&#39;B&#39;||c==&#39;C&#39;)return 2;
        else if(c==&#39;D&#39;||c==&#39;E&#39;||c==&#39;F&#39;)return 3;
        else if(c==&#39;G&#39;||c==&#39;H&#39;||c==&#39;I&#39;)return 4;
        else if(c==&#39;J&#39;||c==&#39;K&#39;||c==&#39;L&#39;)return 5;
        else if(c==&#39;M&#39;||c==&#39;N&#39;||c==&#39;O&#39;)return 6;
        else if(c==&#39;P&#39;||c==&#39;R&#39;||c==&#39;S&#39;)return 7;
        else if(c==&#39;T&#39;||c==&#39;U&#39;||c==&#39;V&#39;)return 8;
        else return 9;
    }
}
