class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    set<vector<int>> st;
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i = 0; i<nums.size()-2; i++){
        int start = i+1;
        int end = nums.size()-1;
        while(start < end){
            if(nums[start] + nums[end] + nums[i] > 0){
                end--;
                continue;
            }
            else if(nums[start] + nums[end] + nums[i] < 0){
                start++;
            }
            else{
                vector<int> v = {nums[start], nums[end], nums[i]};
                sort(v.begin(),v.end());
                st.insert(
                    v
                );
                start++;
                end--;
                
            }
        }
    }
    for(auto& p:st){
        ans.push_back(p);
    }
    return ans;
    }
};
