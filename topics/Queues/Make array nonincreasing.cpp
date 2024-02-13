Minimum increment/decrement to make array non-Increasing

int minOperations(int *a,int n)
    {
        priority_queue<int,vector<int>,greater<int>>pq;
        int res=0;
        pq.push(a[0]);
        
        for(int i=1;i<n;i++)
        {
            if(pq.top()<a[i])
            {
                res+=(a[i]-pq.top());
                pq.push(a[i]);
                pq.pop();
            }
            pq.push(a[i]);
        }
        return res;
    }