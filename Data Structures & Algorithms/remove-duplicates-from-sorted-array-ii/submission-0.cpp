class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i =0;
        for(int j=0; j<arr.size(); j++){
            if(i<2 || arr[j] != arr[i-2]){
                arr[i] = arr[j];
                i++;
            }
        }
        return i;
    }
};