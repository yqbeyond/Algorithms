class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        
        string r;
        int i = 0;
        int skip = numRows * 2 - 2;
        while (i < s.size()) { r += s[i]; i += skip; }
        for (int l = 1; l < numRows - 1; l++)
        {
            i = l;
            while (i < s.size()) {
                r += s[i]; i += skip - l * 2;
                if (i < s.size()) { r += s[i]; i += l * 2; }
            }
        }
        i = numRows - 1;
        while (i < s.size()) { r += s[i]; i += skip; }
        return r;
    }
};
