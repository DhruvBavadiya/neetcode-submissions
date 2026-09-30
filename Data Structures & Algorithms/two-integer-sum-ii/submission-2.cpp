class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len = numbers.size();
        int i = 0;
        int j = len-1;

        while(j>i && i<numbers.size()){
            if(numbers[i] + numbers[j] > target){
                j--;
            }
            else if(numbers[i] + numbers[j] < target){
                i++;
            }
            else{
                return {i+1, j+1};
            }
        }
        
        return {};
    }
};
