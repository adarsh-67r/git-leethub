class Solution {
public:
    int fib(int n) {
        if (n <= 1)
            return n;
        int k1 = 0;
        int k2 = 1;
        for (int i = 2; i <= n; i++)
        {
            int cur = k1 + k2;
            k1 = k2;
            k2 = cur;
        }
        return k2;
    }
};