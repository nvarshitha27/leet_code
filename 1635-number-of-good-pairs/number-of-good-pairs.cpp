class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(auto a: nums) freq[a]++;
        int ans = 0;
        for(auto a: freq){
            int num = a.second-1;
            ans = ans+(num * (num + 1) / 2);
        }
        return ans;
    }
};