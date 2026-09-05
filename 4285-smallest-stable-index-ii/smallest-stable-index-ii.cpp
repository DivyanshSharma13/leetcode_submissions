class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> suffix(n);
        suffix[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i] = min(suffix[i+1],nums[i]);
        }
        int mx = INT_MIN;
        int ans = 0;
        for(int i=0;i<n;i++){
            mx = max(mx,nums[i]);
            ans = mx-suffix[i];
            if(ans <= k) {
                return i;
            }
        }
        return -1;
    }
};