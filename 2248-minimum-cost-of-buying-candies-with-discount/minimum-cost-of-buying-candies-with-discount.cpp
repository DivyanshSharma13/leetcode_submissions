class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), std::greater<int>());
        int sum = 0;
        int id=0;
        for (int i = 0; i <cost.size(); i++) {
            if(i==id+2){
                id=i+1;
                continue;
            }
            sum += cost[i];
        }
        return sum;
    }
};