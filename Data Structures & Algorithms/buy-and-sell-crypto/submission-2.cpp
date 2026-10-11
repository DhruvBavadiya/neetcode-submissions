class Solution {
   public:
    int maxProfit(vector<int>& prices) {

        vector<int> right(prices.size());

        right[prices.size() - 1] = prices[prices.size() - 1];

        for (int i = prices.size() - 2; i >= 0; i--) {
            right[i] = max(prices[i + 1], right[i + 1]);
        }
        int max_ans = 0;
        for (int i = 0; i < prices.size(); i++) {
            if((right[i] - prices[i]) > 0){
            max_ans = max(max_ans, (right[i] - prices[i]));
            }
        }
        return max_ans;
    }
};
