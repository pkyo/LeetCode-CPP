# Description

You are climbing a staircase. It takes `n` steps to reach the top.

Each time you can either climb `1` or `2` steps. In how many distinct ways can you climb to the top?

# Example

```shell
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
```

# Problem-Solving

# Code

```cpp
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
```

# Hacking CPP


