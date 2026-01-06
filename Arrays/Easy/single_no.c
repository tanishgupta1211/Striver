class Solution{
public:
    int singleNumber(vector<int>& nums){
        int n = nums.size();
        int XOR = 0;
        for(int i = 0; i < n; i++){
            XOR = XOR ^ nums[i];
        }
        return XOR;
    }
};



class Solution{
public:
    int singleNumber(vector<int>& nums){
        //your code goes here
        int n = nums.size();
        map<int , int> mp;
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        for(auto i : mp){
            if(i.second == 1) return i.first;
        }
        return -1;
    }
};
