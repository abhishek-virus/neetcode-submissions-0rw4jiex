class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int initial =0;
        for(int i=0; i<n; i++){
            initial += nums[i];
        }
        return sum - initial;
    }
};
