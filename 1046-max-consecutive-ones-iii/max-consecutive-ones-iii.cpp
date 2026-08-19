class Solution {
public:
// Aaryan08
    int longestOnes(vector<int>& nums, int k) {
        int zerocount = 0;
        int maxcount = 0;
        int n = nums.size();
        int i=0;

        for(int j=0 ; j<n ; j++){
            if(nums[j] == 0){
                zerocount++;
            }
            while(zerocount > k){
                if(nums[i] == 0){
                    zerocount--;
                }
                i++;
            }
            maxcount = max(maxcount , j-i+1);
        }
        return maxcount;
    }
};
