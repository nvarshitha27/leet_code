class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     int minn = INT_MAX, n = nums.size();
     int sum = 0, i = 0, j = 0;
     while(j<n){
        sum += nums[j];
        while(sum > target){
            minn = min(minn, (j - i)+1);
            sum -= nums[i]; 
            i++;
        }
        if(sum == target){
         minn = min(minn, (j - i)+1);
        }
        j++;
     }
     return (minn == INT_MAX ? 0 : minn);

    }
};