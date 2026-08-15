class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        //First position
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] >= target){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        if(ans == -1 || nums[ans] != target){
            return {-1, -1};
        }
        int first = ans;

        // Last position
        low =0;
        high = n-1;
        ans = -1;
        while(low <= high){
            int mid = (low + high) /2;
            if(nums[mid] <= target){
                ans = mid;
                low = mid + 1;
            }
            else high = mid -1;
        }
        int last = ans;
        return {first, last};
    }
};