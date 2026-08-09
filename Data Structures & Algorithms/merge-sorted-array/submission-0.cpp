class Solution {
private:
void swapgreat(vector<int>& a1, int ind1, vector<int>& a2, int ind2){
    if(a1[ind1] > a2[ind2]){
        swap(a1[ind1], a2[ind2]);
    }
}
public:
    void merge(vector<int>& a1, int n, vector<int>& a2, int m) {
        int len = n+m;
        int gap = (len/2) + (len%2);
        while(gap > 0){
            int left =0;
            int right=left + gap;
            while(right < len){
                if(left<n && right >= n){
                    swapgreat(a1, left, a2, right-n);
                }else if(left>=n){
                    swapgreat(a2, left-n, a2, right-n);
                }else{
                    swapgreat(a1, left, a1, right);
                }
                left++, right++;
            }
            if(gap == 1) break;
            gap = (gap/2) + (gap%2);
        }
        for(int i = 0; i < m; i++) {
            a1[n + i] = a2[i];
        }
    }
};