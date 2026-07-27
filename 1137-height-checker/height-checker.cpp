class Solution {
public:
    int heightChecker(vector<int>& heights)
    {
        int n= heights.size();
        vector<int> expected = heights;
        for(int i=0; i<n-1; i++){
            int mini=i;
            for(int j=i+1; j<n; j++ ){
                if(expected[j]<expected[mini]){
                    mini=j;
                }
            }
            swap(expected[mini], expected[i]);
        }
        int count =0;
        for(int i=0; i<n; i++){
            if(heights[i] != expected[i]){
                count = count+1;
            }
        }
        return count;
    }
};