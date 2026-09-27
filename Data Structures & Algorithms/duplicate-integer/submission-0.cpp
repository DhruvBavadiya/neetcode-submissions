class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        for(const auto& p: mp){
            if(p.second>1){
                return true;
            }
        }
        return false;
    }
};