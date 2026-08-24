class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int right =height.size()-1;
        int maxArea =0;
        while(left<right){
            int width = right- left;
            int Area=width*min(height[left], height[right]);
             maxArea =max(maxArea ,Area );
            if(height[left]> height[right]){
                right--; 
            }else{
                left++;

            }
        }
        return maxArea;
        
    }
};