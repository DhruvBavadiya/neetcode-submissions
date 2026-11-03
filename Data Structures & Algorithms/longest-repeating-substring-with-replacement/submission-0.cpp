class Solution {
   public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;
        int ans = 0;
        unordered_map<char, int> freq;
        while (right < s.length()) {
            freq[s[right]]++;
            int max_item = maxFreq(freq);
            int window_size = right - left + 1;

            if((window_size - max_item) > k){
                freq[s[left]]--;
                left++;
            }
            else{
                ans = max(ans, window_size);
            }
            right++;
        }
        return ans;
    }
    int maxFreq(unordered_map<char, int>& freq) {
        int max_num = 0;
        for (auto it : freq) {
            max_num = max(max_num, it.second);
        }
        return max_num;
    }
};
