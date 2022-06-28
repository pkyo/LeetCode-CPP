# Description

You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `ith` line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

# Example

<img title="" src="../website/static/img/containerWithMostWater.jpeg" alt="" width="488" data-align="center">

```shell
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. 
    In this case, the max area of water (blue section) the container can contain is 49.
```

# Problem-Solving

# Code

```cpp
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
```

# Hacking CPP
