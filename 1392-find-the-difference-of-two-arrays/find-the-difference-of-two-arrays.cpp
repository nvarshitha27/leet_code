class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer(2);
        unordered_set<int> s1;
        unordered_set<int> s2;
        for(int i = 0; i < nums1.size(); i++){
            s1.insert(nums1[i]);
        }
        for(int i =0; i < nums2.size(); i++){
            s2.insert(nums2[i]);
        }
        for(auto a: s1){
            if(s2.find(a) == s2.end())
            answer[0].push_back(a);
        }
        for(auto x: s2){
            if(s1.find(x) == s1.end())
            answer[1].push_back(x);
        }
       return answer;
    }
};