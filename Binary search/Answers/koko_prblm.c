class Solution {
private:
    int findMax(vector<int> &v) {
        int maxi = INT_MIN;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }
    long long calculateTotalHours(vector<int> &v, int hourly) {
        long long totalH = 0;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            totalH += ceil((double)(v[i]) / (double)(hourly));
        }
        return totalH;
    }

public:
    int minimumRateToEatBananas(vector<int> nums, int h) {
        int maxi = findMax(nums);
        for (int i = 1; i <= maxi; i++) {
            long long reqTime = calculateTotalHours(nums, i);
            if (reqTime <= (long long)h) {
                return i;
            }
        }
        return maxi;
    }
};





class Solution {
private:
    int findMax(vector<int> &v) {
        int maxi = INT_MIN;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }
    long long calculateTotalHours(vector<int> &v, int hourly) {
        long long totalH = 0;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            totalH += ceil((double)(v[i]) / (double)(hourly));
        }
        return totalH;
    }

public:
    int minimumRateToEatBananas(vector<int> nums, int h) {
        int low = 1 , high = findMax(nums);
        long long int reqtime;
        while(low <= high){
            int mid = low + (high - low)/2;
            reqtime = calculateTotalHours(nums , mid);
            if(reqtime <= h){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low;
    }
};
