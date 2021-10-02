//Time - O(n)
//Space - O(1) 	
	 
	double myPow(double x, int n) 
    {
        double res = 1;
        for(int i=1;i<=abs(n);i++)
            res *= x;
        if(n<0)
            res=1/res;
        return res;
    }
    
//Time - O(logn)
//Space - O(n)	
	
	double myPow(double x, int n) 
    {
        if(n == 0)
            return 1;
        if(n%2 == 0)
            return pow(x*x, n/2);
        else 
            return x*pow(x, n-1);	
    }
    
    
