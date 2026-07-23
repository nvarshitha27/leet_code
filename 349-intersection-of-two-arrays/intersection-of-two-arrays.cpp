class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> mySet1;
        unordered_set<int> mySet2;
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++){
           mySet1.insert(nums1[i]);
        }
           for(int i = 0; i < nums2.size(); i++)
           mySet2.insert(nums2[i]); 
              
           for(auto a : mySet1){
            if(mySet2.find(a) != mySet2.end()){
                ans.push_back(a);
            }
        }
        return ans;
    }
};