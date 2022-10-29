//Time - O(n)
//Space - O(1)

    int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    int i=0, j=M-1;
	    while(i<N && j>=0){
	       if(mat[i][j] == X)
	            return 1;
	       else if(mat[i][j] > X)
	            j--;
	       else 
	            i++;
	    }
	    return 0;
	}
	
//Time - O(logn)
//Space - O(1)

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0)
            return -1;
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int lo=0, hi = (row*col)-1;
        
        while( lo<=hi ){
            int mid = lo + (hi-lo)/2;
            if( matrix[mid/col][mid%col] == target)
                return true;
            if( matrix[mid/col][mid%col] < target )
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        return false;
    }
