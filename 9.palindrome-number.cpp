/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        else {
            long long temp = x;
            long long digit = 0;
            while (temp != 0) {
                digit = digit * 10 + temp % 10;
                temp /= 10;
            }
            if (digit == x)
                return true;
            else
                return false;
        }
    }
};
// @lc code=end
