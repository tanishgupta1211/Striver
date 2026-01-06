class Solution {
public:
    int floorSqrt(int n) {
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            long long val = 1LL*i*i;
            if (val <= (long long)n) {
                ans = i;
            } else {
                break;
            }
        }
        return ans;
    }
};



class Solution {
public:
    int floorSqrt(int n) {
        int low = 1, high = n;
        int ans = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long val = 1LL * mid * mid;  // compute mid*mid in 64-bit
            if (val <= (long long)n) {
                ans = max(ans , mid);
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};
