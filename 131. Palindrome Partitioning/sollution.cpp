class Solution {
public:
    vector<vector<string>> ans;
    vector<string> temp;
    bool isPalindrome(string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
    void backtrack(string &s, int index) {
        if (index == s.size()) {
            ans.push_back(temp);
            return;
        }
        for (int i = index; i < s.size(); i++) {
            if (isPalindrome(s, index, i)) {
                temp.push_back(s.substr(index, i - index + 1));
                backtrack(s, i + 1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        backtrack(s, 0);
        return ans;
    }
};1