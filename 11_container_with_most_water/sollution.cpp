class Solution {
public:
    int maxArea(vector<int>& heights) {
        int len = heights.size();
        int i =0 ;
        int j = len -1;
        int max_area = 0 ;
        int area ;
        while(i<j){
            area = (j-i) * min(heights[i],heights[j]);
            max_area = max(max_area ,area);
            if (heights[i] <heights[j]){
                i++ ;}
            else{
                j-- ;
            }
            
        }
        
        return max_area ;
    }
};