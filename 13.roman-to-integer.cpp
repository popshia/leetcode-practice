/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map = {{'M', 1000}, {'D', 500}, {'C', 100},
                                        {'L', 50},   {'X', 10},  {'V', 5},
                                        {'I', 1}};

        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (map[s[i]] < map[s[i + 1]])
                ans -= map[s[i]];
            else
                ans += map[s[i]];
        }

        return ans;
    }
};
// @lc code=end
