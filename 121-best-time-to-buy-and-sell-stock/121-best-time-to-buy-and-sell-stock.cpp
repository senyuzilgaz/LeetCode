class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxcurrent = 0;
        int maxglobal = 0;
        for(int i = 1; i < prices.size(); ++i){
            maxcurrent = max(0, maxcurrent + prices[i] - prices[i-1]);
            maxglobal = max(maxglobal,maxcurrent);
        }
        
        return maxglobal;
    }
};