# Description

Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

# Example

```shell
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Input: nums = [0]
Output: [0]
```

# Problem Solving

# Code

```cpp
class Solution {
public:
    void moveZeroes(std::vector<int> &nums) {
        int j{0};

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                continue;
            }

            if (i == j) {
                ++j;
                continue;
            }

            std::swap(nums[i], nums[j]);

            ++j;
        }
    }
};
```
