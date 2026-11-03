class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int> vec_s1(26);
        vector<int> vec_s2(26);
        for (char c : s1) {
            vec_s1[c - 'a']++;
        }

        for (int i = 0; i < s1.length(); i++) {
            vec_s2[s2[i] - 'a']++;
        }
        int end = s1.length();

        while (end < s2.length()) {
            if (vec_s1 == vec_s2) {
                return true;
            }

            int start = end - s1.length();
            vec_s2[s2[start]-'a']--;
            vec_s2[s2[end]-'a']++;
            end++;
        }
        return vec_s1 == vec_s2;
    }
};
