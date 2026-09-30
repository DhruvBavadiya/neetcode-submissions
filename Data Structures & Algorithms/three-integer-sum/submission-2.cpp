class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int, int> mp;
        set<vector<int>> vec;
        for(int num: nums){
            mp[num]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            int first = nums[i];  //-1

            for (int j = i + 1; j < nums.size(); j++) {
                int second = nums[j];          // 0
                int tgt = 0 - first - second;  // 1
                if (mp.contains(tgt)) {

                    if ((first == second) && !(mp[tgt] > 2)) {
                        continue;
                    }
                    if (((tgt == first || tgt == second) && !(mp[tgt] > 1))) {
                        continue;
                    }
                    vector<int> v = {first, second, tgt};
                    sort(v.begin(), v.end());
                    vec.insert(v);
                }
            }
        }
    vector<vector<int>> ans;
    for (auto& p : vec) {
        ans.push_back(p);
    }
    return ans;
    }
};
