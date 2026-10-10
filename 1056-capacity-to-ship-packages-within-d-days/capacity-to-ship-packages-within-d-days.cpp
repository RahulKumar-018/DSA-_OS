
class Solution {
private:
    bool feasible(const vector<int>& weights, int capacity, int days) {
        int daysNeeded = 1;
        int currentLoad = 0;

        for (int weight : weights) {
            if (currentLoad + weight > capacity) {
                daysNeeded++;
                currentLoad = weight; 
            } else {
                currentLoad += weight;
            }
        }

        return daysNeeded <= days; 
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (feasible(weights, mid, days)) {
                high = mid; 
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};