class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st;
        vector<int> ans(temperatures.size());
        for(int i = 0; i<temperatures.size();i++){
            int temp = temperatures[i];
            if(st.empty()){
                st.push({temp, i});
                continue;
            }
            
            while(!st.empty() && st.top().first < temp){
                ans[st.top().second] = abs((st.top().second) - i);
                st.pop();
            }
            st.push({temp, i});
        }
        return ans;
    }
};
