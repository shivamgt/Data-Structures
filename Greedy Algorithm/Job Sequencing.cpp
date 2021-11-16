//Time - O(n^2)
//Space - O(n)

struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};

class Solution 
{
    public:

    static bool comp(Job a,Job b)
    {
        return a.profit > b.profit;
    }
    
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,comp);
        
        int maxDeadline = arr[0].dead;
        for(int i=1;i<n;i++)
        {
            maxDeadline = max(maxDeadline,arr[i].dead);
        }
        int slot[maxDeadline+1];
        
        for(int i=0;i<=maxDeadline;i++)
            slot[i] = -1;
            
        int countJobs = 0 , jobProfit = 0;
        
        for(int i=0; i<n; i++)
        {
            for(int j=arr[i].dead; j>0; j--)
            {
                if(slot[j]== -1)
                {
                    slot[j] = i;
                    countJobs++;
                    jobProfit += arr[i].profit;
                    break;
                }
            }
        }
        return {countJobs , jobProfit};
    } 
};
