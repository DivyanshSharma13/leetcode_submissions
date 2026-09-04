class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> help;
        for (int i = 0; i < n; i++) {
            if (nums[i] % k == 0) {
                help.push_back(nums[i] / k);
            }
        }
        int ans = 1;
        sort(help.begin(), help.end());
        for (int i = 0; i < help.size(); i++) {
            if (help[i] == ans) {
                ans++;
            }
        }
        return ans * k;
    }
};