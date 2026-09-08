class Solution {
public:
    long long countCommas(int n) {
        long long totalComma =0;
        long long threshold =1000;

        while(n>=threshold){
            totalComma += (n-threshold+1);
            threshold *= 1000;
        }
        return totalComma;

        
    }
};