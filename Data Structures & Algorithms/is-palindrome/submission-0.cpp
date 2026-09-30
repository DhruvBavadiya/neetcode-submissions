class Solution {
   public:
    bool isPalindrome(string s) {
        string update_string = "";
        for (char c : s) {
            if (c >= 'A' && c <= 'Z') {
                update_string.push_back(tolower(c));
            }

            if (c >= 'a' && c <= 'z') {
                update_string.push_back(tolower(c));
            }

            if (c >= '0' && c <= '9') {
                update_string.push_back(tolower(c));
            }
        }
        string rev = "";
        for(int i = s.length()-1; i>=0; i--){
            char c = s[i];
            if (c >= 'A' && c <= 'Z') {
                rev.push_back(tolower(c));
            }

            if (c >= 'a' && c <= 'z') {
                rev.push_back(tolower(c));
            }

            if (c >= '0' && c <= '9') {
                rev.push_back(tolower(c));
            }
        }
        return (rev==update_string);
    }
};
