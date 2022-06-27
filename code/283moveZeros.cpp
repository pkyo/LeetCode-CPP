//
// Created by peuei on 2022/6/27.
//

#include <vector>
#include <algorithm>

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