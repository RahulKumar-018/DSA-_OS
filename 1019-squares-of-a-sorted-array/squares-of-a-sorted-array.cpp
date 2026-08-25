class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        vector<int> result(n);
        int k =n-1;
        while(i <=j ){
            int leftsq = (nums[i] * nums[i]);
            int rightsq =(nums[j]*nums[j]);

            if(leftsq >rightsq){
                result[k] = leftsq;
                i++;
            }else{
                result[k]= rightsq;
                j--;
            }
            k--;
            

           
        }
        
        
        return result;
        
    }
};