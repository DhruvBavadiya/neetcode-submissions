class Solution {
   public:
    int maxProfit(vector<int>& prices) {
// This was bruteforce approch with o(n) space.
        // vector<int> right(prices.size());

        // right[prices.size() - 1] = prices[prices.size() - 1];

        // for (int i = prices.size() - 2; i >= 0; i--) {
        //     right[i] = max(prices[i + 1], right[i + 1]);
        // }
        // int max_ans = 0;
        // for (int i = 0; i < prices.size(); i++) {
        //     if((right[i] - prices[i]) > 0){
        //     max_ans = max(max_ans, (right[i] - prices[i]));
        //     }
        // }
        // return max_ans;

// now reducing o(n) space.

        int max_right = prices[prices.size()-1];
        int maxProfit = 0;
        for(int i = prices.size()-2; i>=0; i--){
            max_right = max(max_right, prices[i]);
            maxProfit = max(maxProfit, max_right-prices[i]);
        }
        return maxProfit;
    }
};
