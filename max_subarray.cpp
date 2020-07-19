class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int len= nums.size();
        int max_sum =nums[0], sum = nums[0];
        for(int i=1; i<len; i++)
        {
            sum = max(nums[i], sum+nums[i]);
            max_sum = max(sum, max_sum);
        }
       return max_sum; 
    }
};