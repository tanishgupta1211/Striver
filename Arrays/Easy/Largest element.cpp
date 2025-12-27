Given an array of integers nums, return the value of the largest element in the array


Example 1
Input: nums = [3, 3, 6, 1]
Output: 6
Explanation: The largest element in array is 6

Example 2
Input: nums = [3, 3, 0, 99, -40]
Output: 99
Explanation: The largest element in array is 99

Example 3
Input: nums = [-4, -3, 0, 1, -8]
Output:
1


class Solution {
public:
    int largestElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());  //TC :: O(NlogN) nd SC :: O(1)
        return nums[n-1];
    }
};

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int n = nums.size();
        int max = nums[0];
        for(int i = 1; i < n; i++){         //TC :: O(1) nd SC :: O(1)
            if(nums[i] > max)
                max = nums[i];
        }
        return max;
    }
};