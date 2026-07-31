class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        map<int, int> mp;
        mp[0] =1;
        int n= a.size();
        int presum =0, cnt=0;
        for(int i=0; i<n; i++){
            presum += a[i];
            int remove = presum -k;
            cnt += mp[remove];
            mp[presum]++;
        }

        return cnt;
    }
};