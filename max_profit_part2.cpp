class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int len = prices.size();
        if(!len) return 0;
        
        int cmin=0, cmax=0, sum=0;
        for(int i=1; i<len; i++)
        {
            if(prices[cmax] > prices[i])
            {
                if(cmax > cmin)
                    sum = sum + prices[cmax] - prices[cmin];
 
                cmin = i;
                cmax = i;
            }
            else
                cmax = i;     
        }
        if(cmax == len-1)
            sum = sum + prices[cmax] - prices[cmin];
        return sum;
    }
};