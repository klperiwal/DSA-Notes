Given a matrix of size n x n such that it has only one 0.
Find the positive number to be placed in place of the 0 such that sum of the
numbers in every row, column and two diagonals become equal.


bool row(vector<vector<int>>& matrix, int n)
     {
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=matrix[0][i];

        for(int i=1;i<n;i++)
        {
            int k=0;
            for(int j=0;j<n;j++)
                k+=matrix[i][j];

            if(k!=sum)
                return false;
        }
        return true;
    }

     bool col(vector<vector<int>>& matrix, int n)
     {
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=matrix[i][0];

        for(int i=1;i<n;i++)
        {
            int k=0;
            for(int j=0;j<n;j++)
                k+=matrix[j][i];

            if(k!=sum)
                return false;
        }
        return true;
    }

    bool dia(vector<vector<int>>& matrix, int n)
    {
        int d1=0,d2=0;
        for(int i=0;i<n;i++)
            d1+=matrix[i][n-1-i];
        for(int i=0;i<n;i++)
            d2+=matrix[i][i];

        return (d1==d2);
    }

    long long int MissingNo(vector<vector<int>>& matrix) 
    {
        long long int ans= 0,r,c;
        int n=matrix.size();
        // Here i find posistion of 0
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(matrix[i][j]==0)
                {
                    r=i;
                    c=j;
                }

        if(r==0)
        {
            for(int i=0;i<n;i++)
                ans=ans+(matrix[1][i]-matrix[0][i]);
            matrix[r][c]=ans;
        }
        else
        {
            for(int i=0;i<n;i++)
                  ans+=(matrix[0][i]-matrix[r][i]);
            matrix[r][c]=ans;
        }
        if(ans>0)
            if(row(matrix,n) && col(matrix,n) && dia(matrix,n))
                return ans;
        
        return -1;
    }