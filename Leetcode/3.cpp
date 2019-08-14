class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int b = 0, e = 0, max = 0;
        int j, size = s.size();
        for (e = 0; e < size; e++)
        {
            for (j = b; j < e; j++)
            {
                if (s[j] == s[e])
                {
                    b = j + 1;
                    break;
                }
            }
            if (e - b + 1 > max) max = e - b + 1;
        }
        return max;
    }
};
/*
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        int start = 0;
        char mp[256] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            if (i + max > s.size()) break;    
            int tmp = start - i;

            for (int j = start; j < s.size(); j++)
            {
                if (mp[s[j]] == 0)
                {
                    mp[s[j]] = 1;
                    tmp += 1;
                    start += 1;
                }
                else
                    break;
            }
            if (tmp > max) max = tmp;
            
            mp[s[i]] = 0;
            
        }
        return max;
    }
};
*/
