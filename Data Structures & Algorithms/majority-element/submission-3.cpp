class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt=0;
        int el;
        for(int i=0; i<n; i++){
            if(cnt == 0){
                cnt = 1;
                el = nums[i];
            }else if(nums[i] == el){
                cnt++;
            }else{
                cnt--;
            }
        }
        int cnt1 =0;
        for(int i=0; i<n; i++){
            if(nums[i] == el){
                cnt1++;
            }
        }
        if(cnt1 > n/2){
            return el;
        }


        // // hashing
        // map<int, int> mpp;
        // for(int i=0; i<n; i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it: mpp){
        //     if(it.second > n/2){
        //         return it.first;
        //     }
        // }
        return -1;
    }
};