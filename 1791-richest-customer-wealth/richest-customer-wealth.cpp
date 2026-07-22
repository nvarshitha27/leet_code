class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int ans = 0;// int maxx = INT_MIN;
        int m = accounts[0].size();
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = 0; j < m; j++){
                sum += accounts[i][j];
            }
            ans = max(ans, sum);// maxx = max(maxx, sum);
        }
       return ans;
    }
};