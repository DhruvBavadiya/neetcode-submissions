class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int total = 1;
        // bool is_zero = false;
        // int num_zeros = 0;
        // for (int num : nums) {
        //     if (num) {
        //         total = total * num;
        //     } else {
        //         num_zeros++;
        //         is_zero = true;
        //         continue;
        //     }
        // }
        // if(num_zeros>1){
        //     return vector<int>(nums.size(), 0);
        // }
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i]) {
        //         if (!is_zero) {
        //             nums[i] = total / nums[i];
        //         } else {
        //             nums[i] = 0;
        //         }
        //     } else {
        //         nums[i] = total;
        //     }
        // }

        vector<int> ans(nums.size(), 1);
        // find left prefix:
        int prefix = 1;
        for(int i = 0; i< nums.size(); i++){
            ans[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
};
