class Solution {
public:
    void rotate(vector<int> &arr, int k) {
        int n= arr.size();
        k = k%n;
        int temp[k];
        for(int i =0; i<k; i++){
            temp[i] = arr[i+n-k];
        }
        for(int i=n-k-1; i>=0; i--){
            arr[i+k] = arr[i];
        }
        for(int i=0; i<k;i++){
            arr[i] = temp[i];
        }
    }
};