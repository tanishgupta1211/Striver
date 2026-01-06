class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0 , xor2 = 0;
        for(int i = 1; i <= n; i++){
            xor1 = xor1 ^ i;
            xor2 = xor2 ^ nums[i-1];
         }
        return xor1 ^ xor2;
    }
};



class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int vecsum = 0;
        for(int i = 0; i < n; i++){
            vecsum += nums[i];
        }
        int sum = (n*(n+1))/2;
        return sum - vecsum;
    }
};



class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n+1 , 0);
        for(int i = 0; i < n; i++){
            temp[nums[i]] = 1;
        }
        for(int i = 0; i < temp.size(); i++){
            if(temp[i] == 0){
                return i;
            }
        }
        return 0;
    }
};



class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        for (int i = 0; i <= N; i++) {
            int flag = 0;
            for (int j = 0; j < N; j++) {
                if (nums[j] == i) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) return i;
        }
        return -1;
    }
};
