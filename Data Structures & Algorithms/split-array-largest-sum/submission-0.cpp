class Solution {
public:
    int count(vector<int> &arr, int pages){
        int st = 1;
        long long pagestudent = 0;
        for(int i=0; i<arr.size(); i++){
            if(pagestudent + arr[i] <= pages){
                pagestudent += arr[i];
            }
            else{
                st++;
                pagestudent = arr[i];
            }
        }
        return st;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while(low <= high){
            int mid = (low + high) / 2;
            int sum = count(nums, mid);
            if(sum <= k) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};