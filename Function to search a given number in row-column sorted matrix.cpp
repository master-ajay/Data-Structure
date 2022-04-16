//Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int i=0;
        int j=m-1;
        while(i<n && j>=0){
            if(x==matrix[i][j])
                return true;
            
            if(matrix[i][j]<x)
                i++;
            else
                j--;
        }
        return false;
    }
