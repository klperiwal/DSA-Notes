int findK(int matrix[][], int n, int m, int key)
{
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=m-1;
        int sum=0;            
        int k=0;
        while(top<=bottom && left<=right)
        {
            if(k==0)
            {
                for(int i=left;i<=right;i++)
                {
                    sum++;
                    if(sum==key)
                        return matrix[top][i];
                }
                top++;
            }
            else if(k==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    sum++;
                    if(sum==key)
                        return matrix[i][right];
                }
                right--;
            }
            
            else if(k==2)
            {
                for(int i=right;i>=left;i--)
                {
                    sum++;
                    if(sum==key)
                        return matrix[bottom][i];
                }
                bottom--;
            }
            else if(k==3)
            {
                for(int i=bottom;i>=top;i--)
                {
                    sum++;
                    if(sum==key)
                    return matrix[i][left];
                }
                left++;
            }
            k=(k+1)%4;
        }
        return -1;
}
