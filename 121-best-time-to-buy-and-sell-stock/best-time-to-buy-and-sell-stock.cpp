class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int currMax = 0;
        int k  = 0;
        
        for(int i = 1; i < n; i++) {
            if(prices[i]<prices[k]) k = i;
            else currMax = max(currMax,prices[i] - prices[k]);
        }
        return currMax;
    }
};