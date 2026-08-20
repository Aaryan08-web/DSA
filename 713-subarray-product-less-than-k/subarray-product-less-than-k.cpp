class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // Aaryan08
        int n = nums.size();
        int count = 0;

        for(int i=0 ; i<n ; i++){
        int prod = 1;
            for(int j=i ; j<n ; j++){
                prod *= nums[j];

                if(prod < k){
                    count++;
                }
                else{
                    break;
                }
            }
        }
        return count;
    }
};
