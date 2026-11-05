class MinStack {
   private:
    stack<int> st;
    stack<int> minSt;

   public:
    MinStack() {}

    void push(int val) {
        st.push(val);
        if (minSt.empty()) {
            minSt.push(val);
        } else {
            minSt.push(min(minSt.top(), val));
        }
    }

    void pop() {
        if (!st.empty()) {
            int top_val = st.top();
            st.pop();
            if (!minSt.empty()) {
                minSt.pop();
            }
        }
    }

    int top() {
        if (!st.empty()) {
            return st.top();
        }
    }

    int getMin() {
        if (!minSt.empty()) {
            return minSt.top();
        }
    }
};
