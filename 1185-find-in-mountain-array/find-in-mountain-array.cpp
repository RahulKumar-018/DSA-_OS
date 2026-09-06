/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
    private:
    int findPeak(MountainArray &mountainArr){
        int n= mountainArr.length();
        int low =0, high = n-1;
        while(low<high){
            int mid = low+(high-low)/2;

            int midVal = mountainArr.get(mid);
            int nextVal = mountainArr.get(mid+1);
            if(midVal >nextVal){
                high = mid;
            }else if( midVal< nextVal){
                low = mid+1;
            }
        }
        return low;

    }
    int searchAscending(MountainArray &mountainArr,int target, int left, int right) {
            while(left<=right){
                int mid = left+(right-left)/2;
                int midVal = mountainArr.get(mid);

                if(midVal == target){
                    return mid;
                }else if(midVal<target){
                    left = mid+1;
                }else{
                    right = mid-1;
                }
            }
            return -1;
    }
    int searchDescending(MountainArray &mountainArr,int target, int left, int right) {
            while(left<=right){
                int mid = left+(right-left)/2;
                int midVal = mountainArr.get(mid);

                if(midVal == target){
                    return mid;
                }else if(midVal<target){
                    right = mid-1;
                }else{
                    left = mid+1;
                }
            }
            return -1;
    }


public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
    int n = mountainArr.length();
    int peakIndex = findPeak(mountainArr);
    
    int result = searchAscending(mountainArr, target, 0, peakIndex);
    if(result != -1) return result;
    
    return searchDescending(mountainArr, target, peakIndex, n-1);
    }

};