class Solution {
public:
    int rob(vector<int>& nums) {
       int len = nums.size();
        if(!len) return 0;
        if(len == 1) return nums[0];
        if(len == 2)return max(nums[0], nums[1]);
        
        int a = max(nums[0], nums[1]), b= nums[0], max1;
        
        for(int i = 2; i< len; i++)
        {
            max1 = max( nums[i]+b, a);
            b=a;
            a=max1;
        }
        return a;
      }
};