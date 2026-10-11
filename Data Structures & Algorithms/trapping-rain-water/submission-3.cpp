class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left(height.size());
        vector<int> right(height.size());

        for(int i = 1; i<height.size(); i++){
            left[i] = max(height[i-1], left[i-1]);
        }

        for(int i = height.size()-2; i>=0; i--){
            right[i] = max(height[i+1], right[i+1]);
        }
        int total = 0;
        for(int i = 0; i<height.size(); i++){

            int to_add = min(left[i], right[i]) - height[i];
            if(to_add>0){
                total+=to_add;
            }
        }
        return total;
    }
};
