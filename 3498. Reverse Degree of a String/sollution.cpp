class Solution {
public:
    int reverseDegree(string s) {
        int sum =0 ;
        for(int i = 0 ; i < s.size() ; i++){
            int num = s[i]-'a' + 1 ;
            sum += (i+1) * (26-num+1);
        }
        return sum ;
    }
};