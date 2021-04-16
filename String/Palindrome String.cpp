	int isPlaindrome(string S)
	{
	    // Your code goes here
	     int left=0;
	     int right=S.size()-1;
	     while(left<right)
	     {
	         if(S[left++]!=S[right--])
	            return 0;
	     }
	     return 1;
	}
