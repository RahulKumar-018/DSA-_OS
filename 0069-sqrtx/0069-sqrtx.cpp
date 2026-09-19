class Solution {
public:
    int mySqrt(int x) {
        
        long long low =1;
        int high= x;
        while(low<=high){
            long long mid= low+(high-low)/2;
            long long sq= mid*mid;
            if(mid*mid >x){
                high= mid-1;
            }else {
                low= mid+1;
            }

        }
        return (int)high;
    }
};