class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int pref = 1, suff=1;
        int ans =INT_MIN;
        int n=arr.size();
        for(int i=0; i<n; i++){
            if(pref == 0) pref=1;
            if(suff == 0) suff=1;

            pref = pref*arr[i];
            suff= suff*arr[n-i-1];
            ans= max(ans, max(pref, suff));
        }
        return ans;
        
    }
};