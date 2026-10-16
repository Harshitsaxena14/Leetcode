
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int tot = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            unordered_map<int, int> mp;
            for (int j = i; j < n; j++) {
                mp[nums[j]]++;
                int distinct = mp.size();
                tot += distinct * distinct;
            }
        }
        return tot;
    }
};

// Approach :- Approach is to use a nested loop to iterate through all possible subarrays of the input array `nums`. For each subarray, we maintain a count of distinct elements using an unordered map. The size of the map gives us the number of distinct elements in the current subarray. We then square this count and add it to a running total `tot`. Finally, we return the total sum of squares of distinct element counts for all subarrays.