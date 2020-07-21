class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int len = nums.size();
        
        if(!len)
            return 0;
        
        int current_num = nums[0], index=1;
        for(int i=1; i<len; i++)
        {
            if(nums[i] != current_num)
            {
                current_num = nums[index] = nums[i];
                index++;
            }
        }  
      return index;  
    }
};