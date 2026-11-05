class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (int i = 0; i < tokens.size(); i++) {
            string token = tokens[i];
            if (is_arith(token)) {
                    int f_val = st.top();
                    st.pop();
                    int s_val = st.top();
                    st.pop();

                    if (token == "+") {
                        st.push(s_val + f_val);
                    } else if (token == "-") {
                        st.push(s_val - f_val);
                    } else if (token == "*") {
                        st.push(s_val * f_val);
                    } else if (token == "/") {
                        st.push(s_val / f_val);
                    }
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }

    bool is_arith(string token) {
        return token == "+" || token == "-" || token == "*" || token == "/";
    }
};
