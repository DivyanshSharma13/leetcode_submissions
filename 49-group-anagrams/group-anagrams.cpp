class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> mp;
        for (string x : strs) {
            string temp = x;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(x);
        }
        vector<vector<string>> res;
        for (const auto& it : mp) {
            res.push_back(it.second);
        }
        return res;
    }
};