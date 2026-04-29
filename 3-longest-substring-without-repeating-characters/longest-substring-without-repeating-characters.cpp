class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> myMap;
        int i = 0, j = 0, maxx = 0, n = s.size();
        while(j < n){
            myMap[s[j]]++;
            while(myMap[s[j]] > 1){
                myMap[s[i]]--;
                i++;
            }
            maxx = max(maxx, (j-i)+1);
            j++;
        }
        return maxx;
    }
};