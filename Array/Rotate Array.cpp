void reverse(vector<int>& nums, int lo,int hi)    // Reverse function 
{
    while(lo < hi)
    {
        swap(nums[lo],nums[hi]);
        lo++;
        hi--;
    }
}
    
void rotate(vector<int>& nums, int k) 
{
    int n=nums.size();
        
    k = k%n;									// Avoid repeatative steps
        
    reverse(nums, 0, n-k-1);					// Reverse Begin(0) to n-k-1 (1st half of array)
    reverse(nums, n-k, n-1);					// Reverse n-k to End(n-1) (2nd half of array)
    reverse(nums, 0, n-1);						// Reverse Begin to Last (Whole Array)
}
