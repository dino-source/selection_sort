#include <gtest/gtest.h>
#include "../src/solution.h"


TEST(TestTopic, selection_sort_test1) {
    std::vector<int> nums {23, 56, 11, 45, 99, 10, 57, 78};
    Solution::selection_sort(nums);

    EXPECT_TRUE(std::is_sorted(nums.begin(), nums.end()));
}
