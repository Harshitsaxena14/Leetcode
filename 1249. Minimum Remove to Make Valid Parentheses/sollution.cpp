class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for (int i = 0; i < static_cast<int>(s.size()); i++) {
            if (s[i] == '(') {
                st.push(i);
            }
            else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();
                }
                else {
                    s[i] = '#';
                }
            }
        }
        while (!st.empty()) {
            s[st.top()] = '#';
            st.pop();
        }
        string ans;
        ans.reserve(s.size());
        for (string::const_iterator it = s.begin(); it != s.end(); ++it) {
            if (*it != '#') {
                ans += *it;
            }
        }
        return ans;
    }
};