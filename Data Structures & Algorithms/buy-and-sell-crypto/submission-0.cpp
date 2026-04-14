class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPrice = 0;
        int L = 0;

        for(int R = 0; R < prices.size(); R++){

            if(prices[L] < prices[R]){
                int currentProfit = prices[R] - prices[L];
                maxPrice = std::max(maxPrice, currentProfit);
            } else {
                L = R;
            }
        }
        return maxPrice;
    }
};
