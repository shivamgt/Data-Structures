//Brute Force
//Time - O(n*2)
//Space - O(1)

int findZeroes(int arr[], int n, int m) {
        int zero, res=0;
        for(int i=0;i<n;i++){
            zero=0;
            for(int j=i;j<n;j++){
                if(arr[j] == 0)
                    zero++;
                if(zero <= m)
                    res = max(res, j-i+1);    
            }
        }
        return res;
    }  
    
//Sliding Window 
//Time - O(n)
//Spcae - O(1)

int findZeroes(int arr[], int n, int m) {
        int i=0, j=0, zero=0, res=0;
        while(j<n){
            if(arr[j] == 0)
                zero++;
            if(zero <= m)
                res = max(res, j-i+1);
            else {
                while( zero > m){
                    if(arr[i] == 0)
                        zero--;
                    i++;
                }
            }   
            j++;
        }
        return res;
    }     
