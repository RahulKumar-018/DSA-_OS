class Solution {
public:
    long long countCommas(long long n) {
        long long threshold =1000;
        long long totalComma =0;
        if(n <threshold) return 0;
        while(n>= threshold){
           totalComma += (n-threshold+1);
           threshold *= 1000;
        }
        return totalComma;
     
    }
};