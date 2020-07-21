class Solution {
public:
    void reverse(vector<int>& nums, int beg, int end)
    {
        int j=0;
        int i= beg;
        while(j<= ceil((end-beg)/2.0) - 1)
        {
            swap(nums[i], nums[end-j]);
            j++;
            i++;
        }
        cout<< endl;
    }
    
    
    
    
    void rotate(vector<int>& nums, int k) {
       int len = nums.size();
        if(!len) return ;
        
        k %= len;
        if(!k) return;
        
 /******************** reverse method ***************/
        
        reverse(nums, 0, len-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, len-1);
        
        
 /*****************O(n) space soution*********/     
//         int index, temp;
//         unordered_map<int, bool> ump;
//         for(int i= len-1; i>=0; i--)
//         {
//             if(ump[i]) continue;
            
//             index  = (i+k) % len;
//             temp= nums[index];
//             nums[index] = nums[i];
//             ump[index] = 1;
            
//             int j = (index+k) % len;
//             while(!ump[j])
//             {
//                 //index  = (i+k) % len;
//                 swap(temp, nums[j]);
//                 ump[j] = 1;
//                 j = (j+k)%len;
        
//            }
      
//        }
        
          
    }
};