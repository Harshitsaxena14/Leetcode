class Solution
{
public:
    int evalRPN(vector<string> &token)
    {
        stack<int> st;
        for (int i = 0; i < token.size(); i++)
        {
            if (token[i] != "+" &&
                token[i] != "-" &&
                token[i] != "*" &&
                token[i] != "/")
            {
                st.push(stoi(token[i]));
            }
            else
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int ans = 0;
                if (token[i] == "+")
                    ans = b + a;
                else if (token[i] == "-")
                    ans = b - a;
                else if (token[i] == "*")
                    ans = b * a;
                else
                    ans = b / a;
                st.push(ans);
            }
        }
        return st.top();
    }
};