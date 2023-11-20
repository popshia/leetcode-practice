/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            // set target sum as negative nums[i]
            int target = -nums[i];

            // set front iterator to i+1
            int front = i + 1;

            // set back iterator to end
            int back = nums.size() - 1;

            // find sums that is num[i] from front
            while (front < back) {
                int sum = nums[front] + nums[back];

                if (sum < target)
                    front++;

                else if (sum > target)
                    back--;

                else {
                    vector<int> triplet = {nums[i], nums[front], nums[back]};
                    ans.push_back(triplet);

                    // skip duplicates of second and third number
                    while (front < back && nums[front] == triplet[1])
                        front++;
                    while (front < back && nums[back] == triplet[2])
                        back--;
                }
            }

            // skip duplicates of number 1
            while (i + 1 < nums.size() && nums[i + 1] == nums[i])
                i++;
        }

        return ans;
    }
};
// @lc code=end
