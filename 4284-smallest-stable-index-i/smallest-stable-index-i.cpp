class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int mx = INT_MIN;
        int mn=INT_MAX;
        int ans=0;
        int idx=-1;
        for(int i=0;i<n;i++){
            mx = max(mx,nums[i]);
            mn = *min_element(nums.begin() + i, nums.end());
            ans = mx-mn;
            if(ans<=k){
                idx=i;
                break;
            }
        }
        return idx;
    }
};