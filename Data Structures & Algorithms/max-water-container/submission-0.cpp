class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int max_area = 0;
        int s = heights.size();
        int i = 0;
        int j = s - 1;

        while (i < j) {
            int curr_area = (j - i) * min(heights[i], heights[j]);
            if(heights[i] > heights[j]){
                j--;
            }
            else{
                i++;
            }
            max_area = max(max_area, curr_area);
        }
        return max_area;
    }
};
