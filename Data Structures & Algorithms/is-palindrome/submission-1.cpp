class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> st;

        // Push all valid characters into stack
        for (char c : s) {
            if ((c >= 'A' && c <= 'Z') ||
                (c >= 'a' && c <= 'z') ||
                (c >= '0' && c <= '9')) {
                
                st.push(tolower(c));
            }
        }

        // Traverse forward and compare with stack top
        for (char c : s) {
            if ((c >= 'A' && c <= 'Z') ||
                (c >= 'a' && c <= 'z') ||
                (c >= '0' && c <= '9')) {

                c = tolower(c);

                if (st.top() != c) {
                    return false;
                }

                st.pop();
            }
        }

        return true;
    }
};