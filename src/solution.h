#ifndef DINO_SOURCE_SELECTION_SORT_H
#define DINO_SOURCE_SELECTION_SORT_H

#include <vector>
#include <algorithm>

class Solution {
public:
    static void selection_sort(std::vector<int> &nums) {
        for (auto it {nums.begin()}; it != nums.end(); ++it) {
            auto smallest {std::min_element(it, nums.end())};
            std::iter_swap(smallest, it);
        }
    }
};

#endif // DINO_SOURCE_SELECTION_SORT_H
