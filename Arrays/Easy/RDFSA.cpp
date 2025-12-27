/*
Example 1
Input: nums = [0, 0, 3, 3, 5, 6]
Output: 4
Explanation:
Resulting array = [0, 3, 5, 6, _, _]
There are 4 distinct elements in nums and the elements marked as _ can have any value.

Example 2
Input: nums = [-2, 2, 4, 4, 4, 4, 5, 5]
Output: 4
Explanation:
Resulting array = [-2, 2, 4, 5, _, _, _, _]
There are 4 distinct elements in nums and the elements marked as _ can have any value.

Example 3
Input: nums = [-30, -30, 0, 0, 10, 20, 30, 30]
Select the possible resulting array.
Output:
[-30, 0, 10, 20, 30, _, _, _]
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int k = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {              //TC :: O(N) nd SC :: O(1)
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        for(int j = 1; j < n; j++){
            if(nums[j] != nums[i]){                  //TC :: O(N) nd SC :: O(1)
                nums[i+1] = nums[j];
            i++;    
            }
        }
        return i+1;
    }
};
