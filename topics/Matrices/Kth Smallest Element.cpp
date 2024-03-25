Every row and column is sorted in non-decreasing order. 
Find the kth smallest element in the matrix.


int smallerThanMid(int row[],int mid,int n)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(row[m]<=mid)
            l=m+1;
        else 
            h=m-1;
    }
    return l;
}

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    int low=mat[0][0];
    int high=mat[n-1][n-1];

    while(low<=high)
    {
        int mid=(high+low)/2;
        int count=0;
        for(int i=0;i<n;i++)
            count+=smallerThanMid(mat[i],mid,n);
      
        if(count<k)
            low=mid+1;
        else 
            high=mid-1;
    }
    return low;
}
