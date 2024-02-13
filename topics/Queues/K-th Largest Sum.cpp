K-th Largest Sum Contiguous Subarray:

int kthLargest(vector<int> &arr,int n,int K)
    {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=arr[j];
                pq.push(sum);
            }
            while(pq.size()>K)
                pq.pop();
        }
        return pq.top();
    }