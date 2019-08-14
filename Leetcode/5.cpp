// dp version

class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.size();
        int dp[1001][1001] = {0};
        int b = 0;
        int max = 1;
        int i;
        int len;
        for (i = 0; i < size; i++) dp[i][i] = 1;
        for (i = 0; i < size - 1; i++)
        {
            if (s[i] == s[i+1])
            {
                max = 2;
                dp[i][i+1] = 1;
                b = i;                
            }
        }
        for (len = 3; len <= size; len++)
        {
            for (i = 0; i + len <= size; i++)
            {
                if ( dp[i+1][i+len-2] && s[i] == s[i+len-1]){
                    dp[i][i+len-1] = 1;
                    if ( len > max)
                    {
                        max = len;
                        b = i;
                    }
                }
            }
        }
        return s.substr(b, max);
    }
};
/*
brute force version

class Solution {
public:
    string longestPalindrome(string s) {
        int max = 1;
        int start = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = max + 1; i + j <= s.size(); j++)
            {
                bool ok = true;
                for (int k = 0; k <= j / 2 - 1; k++)
                {
                    if (s[i + k] != s[i + j - 1 - k]) { ok = false; break;}
                }
                if (ok){
                    start = i;
                    max = j;
                }
            }
        }
        return s.substr(start, max);
    }
};
*/
