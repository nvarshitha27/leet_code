class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        map<int,int> freq;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
        }
        for(auto a: freq){
            if(a.second == 2){
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};