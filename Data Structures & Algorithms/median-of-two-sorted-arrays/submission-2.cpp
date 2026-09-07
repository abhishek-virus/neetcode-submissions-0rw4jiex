class Solution {
public:
    double findMedianSortedArrays(vector<int> &a1, vector<int> &a2){
        int n1 = a1.size();
        int n2 = a2.size();
        int i = 0, j = 0;
        int n = (n1 + n2);
        int cnt = 0;
        int ind2 = n/2;
        int ind1 = ind2 -1;
        int el1 = -1, el2 = -1;
        while(i<n1 && j<n2){
            if(a1[i] < a2[j]){
                if(cnt == ind1) el1 = a1[i];
                if(cnt == ind2) el2 = a1[i];
                cnt++;
                i++;
            }
            else{
                if(cnt == ind1) el1 = a2[j];
                if(cnt == ind2) el2 = a2[j];
                cnt++;
                j++;
            }
        }
        while(i <n1){
            if(cnt == ind1) el1 = a1[i];
            if(cnt == ind2) el2 = a1[i];
            cnt++;
            i++;
        }
        while(j < n2){
            if(cnt == ind1) el1 = a2[j];
            if(cnt == ind2) el2 = a2[j];
            cnt++;
            j++;
        }
        if(n % 2 == 1) return el2;
        return (double)((double)(el1 + el2)) / 2.0;
    }
};
