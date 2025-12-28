/*
Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.
Example 1
Input: nums = [1, 2, 3, 4, 5, 6], k = 2
Output: nums = [3, 4, 5, 6, 1, 2]
Explanation:
rotate 1 step to the left: [2, 3, 4, 5, 6, 1]
rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]

Example 2
Input: nums = [3, 4, 1, 5, 3, -5], k = 8
Output: nums = [1, 5, 3, -5, 3, 4]
Explanation:
rotate 1 step to the left: [4, 1, 5, 3, -5, 3]
rotate 2 steps to the left: [1, 5, 3, -5, 3, 4]
rotate 3 steps to the left: [5, 3, -5, 3, 4, 1]
rotate 4 steps to the left: [3, -5, 3, 4, 1, 5]
rotate 5 steps to the left: [-5, 3, 4, 1, 5, 3]
rotate 6 steps to the left: [3, 4, 1, 5, 3, -5]
rotate 7 steps to the left: [4, 1, 5, 3, -5, 3]
rotate 8 steps to the left: [1, 5, 3, -5, 3, 4]
*/

class Solution {
private:
void reverseArray(vector<int>& nums , int start , int end){
    while(start < end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }                                                       //TC :: O(N) ND O(1)
}
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverseArray(nums , 0 , k - 1);
        reverseArray(nums , k , n - 1);
        reverseArray(nums , 0 , n - 1);
    }
};



class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp;
        k = k%n;
        for(int i = 0; i < k; i++){
            temp.push_back(nums[i]);    
        }
        for(int i = k; i < n; i++){                      //TC :: O(N) ND O(K)[WORST CASE :: O(N)]
            nums[i-k] = nums[i];
        }
        int j = 0;
        for(int i = n-k; i < n; i++){
            nums[i] = temp[j];
            j++;
        }
    }
};


class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        for(int j = 1; j <= k; j++){
            int temp = nums[0];                        //TC :: O(N X K)[WORST CASE :: N^2] ND O(1)                    
            for(int i = 1; i < n; i++){    
                nums[i-1] = nums[i];
            }
            nums[n-1] = temp;
        }
    }
};