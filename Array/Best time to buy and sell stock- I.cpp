//Time - O(n)
//Space - O(1)

	int maxProfit(vector<int>& prices) 
    {
        int maxProfit=INT_MIN;
        if(prices.size()==0)
            return 0;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                int profit=prices[j]-prices[i];
                if(profit > maxProfit)
                    maxProfit = profit;
            }
        }
        return maxProfit < 0 ? 0 : maxProfit; 
    }

//Using Auxillary Space
//Time - O(n)
//Space - O(n)

	int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int n = prices.size();
        vector<int> pre(n);
        pre[n-1] = prices[n-1];
        for(int i=n-2; i>=0; i--)
            pre[i] = max( prices[i], pre[i+1] );
        for(int i=0; i<n-1; i++)
            maxProfit = max( maxProfit, pre[i]-prices[i] );
        return maxProfit;  
    }

//Time - O(n)
//Space - O(1)	
	
	int maxProfit(vector<int>& prices) 
    {
        int maxProfit = 0;
        int minPrice = INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minPrice = min(minPrice,prices[i]);
            maxProfit = max(maxProfit, prices[i]-minPrice);
        }
        return maxProfit;
    }
