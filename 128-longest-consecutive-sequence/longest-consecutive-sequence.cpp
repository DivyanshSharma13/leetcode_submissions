class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int n = nums.size();
        sort(nums.begin(), nums.end());
        if (n == 0) {
            return 0;
        }
        int count = 0;
        int longest = 1;
        long last_smaller = LONG_MIN;
        for (int i = 0; i < n; i++) {
            if ((long)nums[i] - 1 == last_smaller) {
                count = count + 1;
                last_smaller = nums[i];
            } else if (nums[i] != last_smaller) {
                count = 1;
                last_smaller = nums[i];
            }
            longest = max(longest, count);
        }
        return longest;
    }
};