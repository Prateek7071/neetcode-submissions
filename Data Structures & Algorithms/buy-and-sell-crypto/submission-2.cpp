class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp =0;
        int minB = prices[0];

        for(auto &s: prices){
            maxp = max(maxp,s-minB);
            minB = min(minB, s);
        }
        return maxp;
    }
};
