class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n =nums.size();
        unordered_map<int, int> count;
        for(int i=0; i<n; i++){
            count[nums[i]]++;
        }
        vector<vector<int>> freq(n+1);
        for(auto it: count){
            int number= it.first;
            int frequency = it.second;
            freq[frequency].push_back(number);
        }
        vector<int> ans;
        for(int i=n; i>=0 && ans.size()<k; i--){
            for(int j=0; j<freq[i].size(); j++){
                ans.push_back(freq[i][j]);
                if(ans.size() == k) break;
            }
        }
        return ans;
    }
};
