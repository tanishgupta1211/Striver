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
bool search(vector<int>& nums, int target) {
        int l = 0, h = nums.size() - 1;

        while (l <= h) {
            int m = l + (h - l) / 2;

            if (nums[m] == target)
                return true;
            else if (target > nums[m])
                l = m + 1;
            else
                h = m - 1;
        }

        return false;
    }
public:
    int findKthPositive(vector<int>& nums, int k) {
        int cnt = 0;
        int i = 1;

        while (true) {
            if (!search(nums, i)) cnt++;
            if (cnt == k) return i;
            i++;
        }
    }
};





class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        // Your code goes here
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] <= k) k++;
            else break;
        }
        return k;
    }
};





class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        // Your code goes here
        int n = nums.size();
        int low = 0 , high = n-1;
        int missing;
        while(low  <= high){
            int mid = low + (high-low)/2;
            missing = nums[mid] -(mid+1);
            if(missing < k) low = mid + 1;
            else high = mid - 1;
        }
        return low + k;
    }
};
/* Reason for the returning low + k.
we know that,
ans = nums[high] + more  ------1
more = k-missing --------2
missing = nums[high] - (high+1) -------3
high + 1 = low --------4
put eq(4) in eq(3) and then eq(3) in eq(2) and then eq(2) in eq(1)*/
