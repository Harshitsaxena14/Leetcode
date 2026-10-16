class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> st;

        for (int num : nums) {
            long long x = num;

            while (!st.empty() && st.back() == x) {
                x += st.back();
                st.pop_back();
            }

            st.push_back(x);
        }

        return st;
    }
};