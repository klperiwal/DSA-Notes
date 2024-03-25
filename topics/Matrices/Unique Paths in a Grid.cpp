Given a matrix grid of n*m size consisting of values 0 and 1.
You can only move in the right or down direction from every cell.
1 means u can enter the cell and 0 means entry isnt allowed.

int uniquePaths(int n, int m,vector<vector<int>>&grid) 
{
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            if(grid[i][0]==1)
                dp[i][0]=1;
            else
                break;
        }
        for(int i=0;i<m;i++)
        {
            if(grid[0][i]==1)
                dp[0][i]=1;
            else
                break;
        }
        for(int i=1;i<n;i++)
            for(int j=1;j<m;j++)
            {
                if(grid[i][j]==0) 
                    dp[i][j]=0;
                else
                {
                    int up=dp[i-1][j];
                    int left=dp[i][j-1];
                    dp[i][j]=(up+left)%1000000007;
                }
            }
        return dp[n-1][m-1];
    }