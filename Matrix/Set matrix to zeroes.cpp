//Time - O(n*m)
//Spave - O(n+m) 	
	 
	void setZeroes(vector<vector<int>>& matrix) 
    {
        int r=matrix.size();
        int c=matrix[0].size();
        
        int row[r];
        int col[c];
        
        //Initialize the value of new arrays
        for(int i=0;i<r;i++)
            row[i]=1;
        for(int j=0;j<c;j++)
            col[j]=1;
        
        // Update the value of array
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=0;
                    col[j]=0;
                }
            }
        }
        
        //Set the matrix
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if( row[i] == 0 || col[j]==0 )
                    matrix[i][j]=0;
            }
        }
    }
    
// Time - 0(n*m)
//Space - 0(1)

	void setZeroes(vector<vector<int>>& matrix) 
    {
        int r=matrix.size();
        int c=matrix[0].size();
        
        int col0=1;
        
        //Update the value
        for(int i=0;i<r;i++)
        {
            if(matrix[i][0]==0)	//For first column
                col0=0;
            for(int j=1;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        //Set the value
        for(int i=r-1;i>=0;i--)
        {
            for(int j=c-1;j>=1;j--)
            {
                if(matrix[i][0] ==0 || matrix[0][j] == 0)
                    matrix[i][j]=0;
            }
            if(col0==0)				//If first column is set to zero then change to zero
                matrix[i][0]=0;
        }
    }
