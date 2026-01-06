class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
       set<int> st;
       int n = nums1.size();
       int m = nums2.size();
       for(int i = 0; i < n; i++){
            st.insert(nums1[i]);
       }
       for(int i = 0; i < m; i++){
            st.insert(nums2[i]);
       }
       vector<int> temp(st.begin() , st.end());
       return temp;
    }
};




class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int i = 0 , j = 0;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> Union;
        while(i < n && j < m){
            if(nums1[i] <= nums2[j]){
                if(Union.size() == 0 || Union.back() != nums1[i])
                    Union.push_back(nums1[i]);
                i++;
        }
        else{
            if(Union.size() == 0 || Union.back() != nums2[j])
                Union.push_back(nums2[j]);
            j++;
        }
    }
    while(i < n){
        if(Union.back() != nums1[i]){
            Union.push_back(nums1[i]);
        }
        i++;
    }
    while(j < m){
        if(Union.back() != nums2[j]){
            Union.push_back(nums2[j]);
        }
        j++;
    }
    return Union;
}
};
