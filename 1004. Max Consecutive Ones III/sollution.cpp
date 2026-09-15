class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeros = 0;
        int left =0;
        int maxi = 0;
        for(int i= 0; i <nums.size() ; i++){
            if(nums[i] == 0){
                zeros ++;
            }
            while(zeros>k){
                if(nums[left] == 0){
                    zeros--;
                }
                left++;
            }
            maxi = max(maxi,i-left+1);
        }
        return maxi;
    }
};