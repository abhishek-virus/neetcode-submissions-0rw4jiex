class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int arr[26] = {0};
        for(char c: s){
            arr[c - 'a']++;
        }
        for(char c: t){
            arr[c - 'a']--;
        }
        for(int x: arr){
            if(x != 0) return false;
        }
        return true;

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;
    }
};
