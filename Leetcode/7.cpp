class Solution {
public:
    int reverse(int x) {
        if (x == -2147483648) return 0;
        int sign;
        if (x > 0) sign = 1;
        else if (x == 0) sign = 0;
        else sign = -1;
        x = sign * x;
        
        int res = 0;
        while (x > 0)
        {
            if ((long long)(res) * 10 > (1<<31) - 1) return 0;
            res = res * 10 + x % 10;
            x /= 10;
        }
        if (res < 0) return 0;
        else
            return sign * res;
    }
};
