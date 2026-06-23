class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 =0, xor2=0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            xor2 ^= nums[i];
            xor1 ^= (i+1);
        }
        return xor1 ^ xor2;

        //second solution
        // int n = nums.size();
        // int sum = n*(n+1)/2;
        // int initial =0;
        // for(int i=0; i<n; i++){
        //     initial += nums[i];
        // }
        // return sum - initial;
    }
};
