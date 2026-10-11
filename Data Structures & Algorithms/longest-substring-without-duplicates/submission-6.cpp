class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxSequ = 0;
        unordered_map<char, int> mp;

        while (right < s.length()) {
            if (mp.count(s[right]) && mp[s[right]] >= left) {
                left = mp[s[right]] + 1;
            }
            mp[s[right]] = right;

            maxSequ = max(maxSequ, right - left + 1);
            right++;
        }

        return maxSequ;
    }
};