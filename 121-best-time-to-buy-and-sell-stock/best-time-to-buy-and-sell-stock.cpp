class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int current = INT_MAX;
        int maxi = 0;

        for(int i = 0; i < prices.size(); ++i) {
            current = min(current, prices[i]);
            maxi = max(maxi, prices[i] - current);
        }

        return maxi;
    }
};