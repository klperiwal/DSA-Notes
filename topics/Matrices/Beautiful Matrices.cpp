Beautiful Matrix: Sum of elemnets in each row and column are equal
Min operation by incrementing value required to make matrix beautiful.

int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        vector<int>row(n,0);
        vector<int>col(n,0);
        for(int i=0;i<n;i++)
        {
            int sum1=0,sum2=0;
            for(int j=0;j<n;j++)
            {
                sum1+=matrix[i][j];
                sum2+=matrix[j][i];
            }
            row[i]=sum1;
            col[i]=sum2;
        }
        
        int sum=0,res=0;
        for(int i=0;i<n;i++)
            sum=max(sum,max(col[i],row[i]));
        
        for(int i=0;i<n;i++)
            res+=(sum-row[i]);
            
        return res;
    }