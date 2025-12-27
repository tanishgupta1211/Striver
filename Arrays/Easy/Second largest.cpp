Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.


Example 1
Input: nums = [8, 8, 7, 6, 5]
Output: 7
Explanation:
The largest value in nums is 8, the second largest is 7

Example 2
Input: nums = [10, 10, 10, 10, 10]
Output: -1
Explanation:
The only value in nums is 10, so there is no second largest value, thus -1 is returned

Example 3
Input: nums = [7, 7, 2, 2, 10, 10, 10]
Output:
7


class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) {
            return -1; 
        }
        sort(nums.begin(), nums.end());
        int largest = nums.back();
        int secondLargest = -1;                 //TC :: O(NlogN) nd SC :: O(logN)
        for (int i = n-2; i >= 0; i--) {
            if(nums[i] != largest){
                secondLargest = nums[i];
                break;
            }
        }
        return secondLargest;
    }
};

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int n = nums.size();
        int max = nums[0];
        for(int i = 0; i < n; i++){
            if(nums[i] > max){
                max = nums[i];
            }
        }
        int smax = INT_MIN;                                      //TC :: O(n) nd SC :: O(1)
        for(int i = 0; i < n; i++){
            if(nums[i] > smax && nums[i] != max)
                smax = nums[i];
        }
        return smax == INT_MIN ? -1 : smax;
    }
};

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int n = nums.size();
        if(n < 2)
            return -1;
        int largest = INT_MIN;
        int slargest = INT_MIN;
        for(int i = 0; i < n; i++){
            if(nums[i] > largest){                              //TC :: O(n) nd SC :: O(1)
                slargest = largest;
                largest = nums[i];
            }
            else if(nums[i] > slargest && nums[i] != largest){
                slargest = nums[i];
            }
        }
        return slargest == INT_MIN ?  -1 : slargest;
    }
};

