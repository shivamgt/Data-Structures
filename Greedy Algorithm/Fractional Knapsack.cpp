//Time - O(nlogn)
//Space - O(1)

class Solution
{
    public:
    
    static bool comp(Item a, Item b)
    {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        
        return r1 > r2;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr+n, comp);
        
        int curWeight = 0;
        double res = 0.0;
        
        for(int i=0; i<n; i++)
        {
            if(curWeight+arr[i].weight <= W)
            {
                curWeight += arr[i].weight;
                res += arr[i].value;
            }
            else{
                int remain = W - curWeight;
                res += ( (double)arr[i].value / (double)arr[i].weight ) * (double)remain;
                break;
            }
        }
        return res;
    }
};
