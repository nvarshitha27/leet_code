class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mySet;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            mySet.insert(nums[i]);
        }
        return(n != mySet.size());
    
}

};