class Solution {
public:
    int countCommas(int n) {
        int count = 0;
        while (n >=  1000) {
            n--;
            count++;
        }

        return count;
    }
};