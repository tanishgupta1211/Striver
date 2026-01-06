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
long long SOD(vector<int> &v, int mid) {
    long long total = 0;
    int n = v.size();
    for (int i = 0; i < n; i++) {
        total += ceil((double)(v[i]) / (double)(mid));
    }
    return total;
}
public:
  int smallestDivisor(vector<int> &nums, int limit) {
       int low = 1 , high = findMax(nums);
        long long int sum_of_divisor;
        while(low <= high){
            int mid = low + (high - low)/2;
            sum_of_divisor = SOD(nums , mid);
            if(sum_of_divisor <= limit){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low;
    }
};
