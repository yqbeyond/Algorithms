class Solution {
    // 
public:
    double Pow(double x, long long n) {
        if (n == 0) return 1;
        if (n == 1) return x;
        double sub = Pow(x, n/2);
        double mod = Pow(x, n%2);
        return sub * sub * mod;
    }
    double myPow(double x, int n) {
        if (n < 0) {
            return 1 / Pow(x, -(long long)(n));
        }
        else {
            
            return Pow(x, (long long)(n));
        }
        
    }
};
