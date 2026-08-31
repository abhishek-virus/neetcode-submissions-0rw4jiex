class Solution {
public:
    int findMax(vector<int>& v) {
        int maxi = INT_MIN;
        int n = v.size();
        for(int i = 0; i < n; i++) {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }

    int calculateTotalHours(vector<int>& v, int hourly) {
        int totalH = 0;
        int n = v.size();
        for(int i = 0; i < n; i++) {
            totalH += ceil((double)v[i] / (double)hourly); //ceil means ceiling function
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& v, int h) {
        int low = 1;
        int high = findMax(v);
        while(low <= high) {
            int mid = (low + high) / 2;
            int totalH = calculateTotalHours(v, mid);
            if(totalH <= h) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};
