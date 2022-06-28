//
// Created by peuei on 2022/6/28.
//
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(const std::vector<int> &heights) {
        // Narrowing conversion from 'unsigned long' to signed type 'int'
        int i = 0, j = heights.size() - 1, k = 0, area = 0;

        while (i < j) {
            k = (heights[i] < heights[j] ? heights[i++] : heights[j--]);

            area = std::max(area, k * (j - i + 1));
        }

        return area;
    }
};
