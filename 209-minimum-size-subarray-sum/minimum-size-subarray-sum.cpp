class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        int sum = 0;
        int left = 0;
        // Aaryan08

        for(int right = 0 ; right<n ; right++){
            sum += nums[right];
            while(sum >= target){
                ans = min(ans , right-left+1);
                sum -= nums[left];
                left++;
            }
        }
        if(ans == INT_MAX){
            return 0;
        }
    return ans;
    }
};                 
