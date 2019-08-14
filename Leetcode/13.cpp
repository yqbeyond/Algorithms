class Solution {
public:
    int romanToInt(string s) {
        int i = 0;
        int ret = 0;
        while (i < s.size())
        {
            if (s[i] == 'I') {
                if (i+1 < s.size())
                {
                    if ( s[i+1] == 'V') { ret += 4; i += 2; }
                    else if (s[i+1] == 'X') { ret += 9; i += 2; }
                    else {ret += 1; i ++;}
                }else
                {
                    ret += 1; i ++;
                }
            }
            
            else if (s[i] == 'X') {
                if (i+1 < s.size())
                {
                    if ( s[i+1] == 'L') { ret += 40; i += 2; }
                    else if (s[i+1] == 'C') { ret += 90; i += 2; }
                    else {ret += 10; i ++;}
                }else
                {
                    ret += 10; i ++;
                }
            }
            
            else if (s[i] == 'C') {
                if (i+1 < s.size())
                {
                    if ( s[i+1] == 'D') { ret += 400; i += 2; }
                    else if (s[i+1] == 'M') { ret += 900; i += 2; }
                    else {ret += 100; i ++;}
                }else
                {
                    ret += 100; i ++;
                }
            }
            else if (s[i] == 'V') {ret += 5; i++;}
            else if (s[i] == 'L') {ret += 50; i++;}
            else if (s[i] == 'D') {ret += 500; i++;}
            else if (s[i] == 'M') {ret += 1000; i++;}
        }
        return ret;
    }
};
