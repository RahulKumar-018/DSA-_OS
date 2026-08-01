class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n= arr.size();
        int currentCount =0;
        int maxCount =0;

        for(int i =0; i<n; i++){
            if(arr[i]==1){
                currentCount++;
                if(currentCount > maxCount){
                    maxCount=currentCount;  
                }
            }else{
                currentCount =0;
            }
        }
        return maxCount;
    }
};