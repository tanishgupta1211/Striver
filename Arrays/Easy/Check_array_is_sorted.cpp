/*Given an array nums of n integers, return true if the array nums is sorted in non-decreasing order or else false.

Example 1
Input : nums = [1, 2, 3, 4, 5]
Output : true
Explanation : For all i (1 <= i <= 4) it holds nums[i] <= nums[i+1], hence it is sorted and we return true.

Example 2
Input : nums = [1, 2, 1, 4, 5]
Output : false
Explanation : For i == 2 it does not hold nums[i] <= nums[i+1], hence it is not sorted and we return false.

Example 3
Input : nums = [1,9,6,8,5,4,0]
Output:
false*/


class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            int n = nums.size();            //TC :: O(N) nd SC :: O(1)
            int count = 0;
            for(int i = 0; i < n-1; i++){       
                if(nums[i] > nums[i+1])
                    return false;
            }
            return true;
		}
};