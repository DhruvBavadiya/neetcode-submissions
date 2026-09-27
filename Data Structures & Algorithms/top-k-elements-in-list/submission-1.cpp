class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for (auto [num, count] : mp) {
            buckets[count].push_back(num);
        }
        vector<int> ans;
        for (int i = buckets.size() - 1; i > 0; i--) {
            for (int num : buckets[i]) {
                ans.push_back(num);

                if (ans.size() == k) return ans;
            }
        }
        return ans;
    }
};
