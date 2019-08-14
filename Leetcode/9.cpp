class Solution {
public:
    bool isPalindrome(int x) {
        long long c = (long long) x;
        if (x < 0) return false;
        long long a = 0;
        long long b = c;
        while (c > 0)
        {
            a = a * 10 + c % 10;
            c /= 10;
        }
        return a == b ? true : false;
    }
};
