class Solution {
   public:
    string encode(vector<string>& strs) {
        string ans = "";
        for (string s : strs) {
            int str_len = s.length();
            ans.append(to5(str_len));
            ans.append(s);
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        cout << s.length() << endl;
        cout << s << endl;
        int i = 0;
        int initial_vals;
        while (i < s.length()) {
            stringstream ss(s.substr(i, 5));
            ss >> initial_vals;
            // cout < "i at starting: " << i << "initial_vals at starting " << initial_vals;
            i = i + 5;
            // cout < "i at between: " << i << "initial_vals at between " << initial_vals;

            ans.push_back(s.substr(i, initial_vals));
            i += initial_vals;
            // cout < "i at end: " << i << "initial_vals at end " << initial_vals;
        }
        return ans;
    }

    string to5(int n) {
        stringstream ss;
        ss << setw(5) << setfill('0') << n;
        return ss.str();
    }
};
