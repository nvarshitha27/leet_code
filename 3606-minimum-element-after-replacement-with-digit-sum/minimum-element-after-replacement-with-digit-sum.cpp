class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size();
        for(int i = 0; i < n; i++){
             int sum = 0;
            int num = nums[i];
            while(num != 0){
            sum += (num % 10);
            num /= 10;
            }
            ans = min(ans, sum);
        }
        return ans;
    }
};