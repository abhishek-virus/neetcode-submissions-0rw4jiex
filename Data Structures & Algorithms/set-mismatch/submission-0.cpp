class Solution {
public:
    vector<int> findErrorNums(vector<int>& a) {
        int n= a.size();
        vector<int> hash(n+1,0);
        for(int i=0; i<n; i++){
            hash[a[i]]++;
        }
        int rep =-1, mis= -1;
        for(int i=1; i<=n; i++){
            if(hash[i] == 2) rep = i;
            else if(hash[i] == 0) mis = i;
            if(rep != -1 && mis != -1) break;
        }
        return {rep, mis};
    }
};