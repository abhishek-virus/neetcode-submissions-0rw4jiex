class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string word: strs){
            int arr[26] = {0};
            for(char c: word){
                arr[c - 'a']++;
            }
            string key = "";
            for(int i =0; i<26; i++){
                key += to_string(arr[i]) + "#";
            }
            mp[key].push_back(word);
        }
        vector<vector<string>> ans;
        for(auto &cpy: mp){
            ans.push_back(cpy.second);
        }
        return ans;
    }
};
