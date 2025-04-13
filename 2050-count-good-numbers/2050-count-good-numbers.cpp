class Solution {
public:
    const int MOD = 1e9 + 7;

    long long modPow(long long base, long long exp) {
        if (exp == 0)
            return 1;
        long long half = modPow(base, exp / 2) % MOD;
        long long result = (half * half) % MOD;
        if (exp % 2 != 0) {
            result = (result * base) % MOD; 
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long ans;
        if (n % 2 == 0) {
            ans = modPow(20, n / 2);
        } else {
            long long a = modPow(5, n / 2 + 1);
            long long b = modPow(4, n / 2);
            ans = (a * b)%MOD;
        }
        return (int)(ans);
    }
};