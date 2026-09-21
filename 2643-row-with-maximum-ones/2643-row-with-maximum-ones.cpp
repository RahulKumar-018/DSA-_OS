class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int bestRow=0;
        int maxOnes =0;
        for(int i=0; i<mat.size(); i++){
            int currentOnes =0;
            for(int val: mat[i]){
                if(val ==1){
                    currentOnes++;

                }
            }
            if(currentOnes> maxOnes){
            maxOnes=currentOnes;
            bestRow=i;
        }
        }
        return {bestRow, maxOnes};
        
    }
};