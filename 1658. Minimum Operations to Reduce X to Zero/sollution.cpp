class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int total = 0;
        for(int num :nums){
            total += num;
        }
        int sum = 0;
        int maxlen = -1;
        int target = total-x;
        int left = 0;
        for(int right = 0; right < n; right++){
            sum+= nums[right];
            while(sum >target && left <= right){
                sum -= nums[left];
                left++;
            }
            if(sum == target){
                maxlen = max(maxlen , right - left +1);
            }
        }
        return maxlen == -1 ? -1 : n - maxlen ;
    }
};