class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int len= nums.size(), x=0;
        for(int i=0; i< len; i++)
        {
            x ^= nums[i];
        }
        
        return x;
    }
};