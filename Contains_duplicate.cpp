class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       
        int len =  nums.size();
        unordered_map<int, bool> ump;
        
        for(int i =0; i< len; i++)
        {
            if(ump[nums[i]])
                return true;
            
            else
                ump[nums[i]]=true;
        }
        
        return false;
    }
};