class Solution {
public:
    vector<int> findErrorNums(vector<int>& a) {
        int n= a.size();
        // vector<int> hash(n+1,0);
        // for(int i=0; i<n; i++){
        //     hash[a[i]]++;
        // }
        // int rep =-1, mis= -1;
        // for(int i=1; i<=n; i++){
        //     if(hash[i] == 2) rep = i;
        //     else if(hash[i] == 0) mis = i;
        //     if(rep != -1 && mis != -1) break;
        // }
        long long sn = (n * (n+1))/2;
        long long s2n = (n * (n+1) * (2*n+1))/6;
        long long s=0, s2=0;
        for(int i=0; i<n; i++){
            s += a[i];
            s2 += (long long)a[i] * (long long)a[i];
        }
        long long v1 = s-sn; //x-y
        long long v2 = s2 - s2n;
        v2 = v2/v1;
        long long x = (v1 + v2)/2;
        long long y = x-v1;
        return {(int)x, (int)y};
    }
};