class Solution {
public:
    int maxProduct(int n) {
        vector<int> help;
        int s = 0;
        while (n > 0) {
            s = n % 10;
            help.push_back(s);
            n = n / 10;
        }
        int a = help.size();
        if(a==2){
            return (help[0]*help[1]);
        }
        long long mx = INT_MIN;
        long long mx2 = INT_MIN;
        for (int x : help) {
            if (x > mx) {
                mx2 = mx;
                mx = x;
            } else if (x > mx2) {
                mx2 = x;
            }
        }
        return (mx * mx2);
    }
};