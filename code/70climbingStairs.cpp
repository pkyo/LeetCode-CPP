//
// Created by peuei on 2022/6/28.
//

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) {
            return 1;
        }

        if (n == 2) {
            return 2;
        }

        int p = 1, q = 2, r = 0;
        // f(x) = f(x-1) + f(x-2)
        // f(1) = p = 1
        // f(2) = q = 2

        for (int i = 3; i <= n; ++i) {
            r = p + q;

            p = q;
            q = r;
        }

        return r;
    }
};
