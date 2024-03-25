vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
{
    vector<int>v;
    int top=0;
    int bottom=r-1;
    int left=0;
    int right=c-1;
        
    int k=0;
    while(top<=bottom && left<=right)
    {
        if(k==0)
        {
            for(int i=left;i<=right;i++)
                v.push_back(matrix[top][i]);
                
            top++;
        }
        else if(k==1)
        {
            for(int i=top;i<=bottom;i++)
                v.push_back(matrix[i][right]);
        
            right--;
        }
        
        else if(k==2)
        {
            for(int i=right;i>=left;i--)
                v.push_back(matrix[bottom][i]);
        
            bottom--;
        }
        else if(k==3)
        {
            for(int i=bottom;i>=top;i--)
                v.push_back(matrix[i][left]);
        
            left++;
        }
        k=(k+1)%4;
    }

    return v;
}
