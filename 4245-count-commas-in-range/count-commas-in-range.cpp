class Solution {
public:
    int countCommas(int n) {
        int ans = 0;

        for (int i = 1; i <= n; i++) {
            int x = i;

            while (x >= 1000) {
                ans++;
                x = x / 1000;
            }
        }

        return ans;
    }
};