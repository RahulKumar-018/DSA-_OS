class Solution {
public:
    bool canWePlace(vector<int>& position, int m, int minDist) {
        int count = 1;                
        int lastPosition = position[0];

        for (int i = 1; i < position.size(); i++) {
            if (position[i] - lastPosition >= minDist) {
                count++;
                lastPosition = position[i];
            }
            if (count >= m) return true;
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int n = position.size();

        int low = 1;
        int high = position[n - 1] - position[0];   
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canWePlace(position, m, mid)) {
                ans = mid;     
                low = mid + 1;  
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};