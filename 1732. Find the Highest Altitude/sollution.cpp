class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int start = 0;
        int maxi = 0;
        for (int i = 0; i < gain.size(); i++) {
            start = start + gain[i];
            maxi = max(maxi, start);
        }
        return maxi;
    }
};