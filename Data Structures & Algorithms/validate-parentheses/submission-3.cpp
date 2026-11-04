class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        if (is_close(s[0])) return false;
        for (char c : s) {
            if (is_open(c)) {
                st.push(c);
            }

            else {
                if (c == '}') {
                    if (!st.empty() && st.top() == '{') {
                        st.pop();
                    } else {
                        return false;
                    }
                }
                else if (c == ']') {
                    if (!st.empty() && st.top() == '[') {
                        st.pop();
                    } else {
                        return false;
                    }
                }
                else if (c == ')') {
                    if (!st.empty() && st.top() == '(') {
                        st.pop();
                    } else {
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }

    bool is_open(char c) { return c == '[' || c == '{' || c == '('; }

    bool is_close(char c) { return c == ']' || c == '}' || c == ')'; }
};
