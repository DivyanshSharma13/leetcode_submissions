class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int a : nums) {
            mp[a]++;
        }
        vector<int> ans;
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(),
             [](const auto& a, const auto& b) { return a.second > b.second; });

        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }
        return ans;
    }
};