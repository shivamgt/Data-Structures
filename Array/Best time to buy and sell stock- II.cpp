	int maxProfit(vector<int>& prices) 
    {
        int maxProfit = 0;
        int minPrice = INT_MAX;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i] > prices[i-1])
            maxProfit += prices[i] - prices[i-1];
        }
        return maxProfit;
    }
