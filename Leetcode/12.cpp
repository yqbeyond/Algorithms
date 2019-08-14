class Solution {
public:
    string intToRoman(int num) {
        string ret;
        int acc = 1;
        for (int j = 0; j < 3; j++)
        {
            string M; if (j == 0) M = "M"; else if (j==1) M = "C"; else if (j==2) M = "X";
            string D; if (j == 0) D = "D"; else if (j==1) D = "L"; else if (j==2) D = "V";
            string CM; if (j == 0) CM = "CM"; else if (j==1) CM = "XC"; else if (j==2) CM = "IX";
            string CD; if (j == 0) CD = "CD"; else if (j==1) CD = "XL"; else if (j==2) CD = "IV";
            
            int m = num / (1000/acc);
            for (int i = 0; i < m; i++) ret += M;
            num %= (1000 / acc);
        
            int cm = num / (900 / acc);
            for (int i = 0; i < cm; i++) ret += CM;
            num %= (900 / acc);
        
            int d = num / (500 / acc);
            for (int i = 0; i < d; i++) ret += D;
            num %= (500 / acc);
        
            int cd = num / (400 / acc);
            for (int i = 0; i < cd; i++) ret += CD;
            num %= (400 / acc);
            
            acc *= 10;
            if (num < 4) break;
        }
        
        
        for (int i = 0; i < num; i++) ret += "I";

        return ret;
    }
};
