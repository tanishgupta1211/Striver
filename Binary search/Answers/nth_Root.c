class Solution {
private:
    long long func(int b, int exp) {
        long long ans = 1;
        long long base = b;
        while (exp > 0) {
            if (exp % 2) {
                exp--;
                ans = ans * base;
            } else {
                exp /= 2;
                base = base * base;
            }
        }
        return ans;
    }
public:
    int NthRoot(int N, int M) {
        for (int i = 1; i <= M; i++) {
            long long val = func(i, N);
            if (val == M * 1ll) {
                return i;
            } else if (val > M * 1ll) {
                break;
            }
        }

        return -1;
    }
};






class Solution {
private:
    /* Helper function to check the power of mid
    with respect to m Returns: 1 - if mid^n == m,
    0 - if mid^n < m and 2 - if mid^n > m */
    int func(int mid, int n, int m) {
        long long ans = 1;
        for (int i = 1; i <= n; i++) {
            ans *= mid;
            if (ans > m) return 2;
        }
        if (ans == m) return 1;
        return 0;
    }
public:
    int NthRoot(int N, int M) {
        int low = 1, high = M;
        while (low <= high) {
            int mid = (low + high) / 2;
            int midN = func(mid, N, M);
            if (midN == 1) {
                return mid;
            }
            else if (midN == 0) {
                // Move to the right half if mid^N < M
                low = mid + 1;
            }
            else {
                // Move to the left half if mid^N > M
                high = mid - 1;
            }
        }
        // Return -1 if no nth root found
        return -1;
    }
};
