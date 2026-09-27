class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]] = i;
        }

        for(int i=0;i<nums.size();i++){
            int j = target-nums[i];
            if(mp.count(j) && mp[j]!=i){
                ans.push_back(i);
                ans.push_back(mp[j]);
                return ans;
            }
        }
        return ans;
    }
};
