class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int len = prices.size();
        if(!len) return 0;
        
        int min1=prices[0], maxprofit= INT_MIN;
        
        for(int i=1; i<len; i++)
        {
            maxprofit = max((prices[i]-min1), maxprofit);
            min1 = min(min1, prices[i]); 
        }
        if(maxprofit < 0)return 0;
        return maxprofit;
    }
};