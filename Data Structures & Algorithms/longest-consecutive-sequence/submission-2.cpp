class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        int max_ans = 0;
        for (auto& p : mp) {
            int ans = 1;

            if (!mp.contains(p.first - 1)) {
                bool is_seq = true;
                int curr = p.first;
                while (is_seq) {
                    if (mp.contains(curr + 1)) {
                        curr++;
                        ans++;
                    } else {
                        is_seq = false;
                        max_ans = max(ans, max_ans);
                    }
                }
            }
        }
        return max_ans;
    }
};
