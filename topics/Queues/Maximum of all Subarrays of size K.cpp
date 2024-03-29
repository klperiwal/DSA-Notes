vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        deque<int>q;
        vector<int>v;
        for(int i=0;i<k;i++)
        {
            while(!q.empty() && arr[i]>arr[q.back()])
                q.pop_back();
                
            q.push_back(i);
        }
        v.push_back(arr[q.front()]);
        
        for(int i=k;i<n;i++)
        {
            if(q.front()==i-k)
                q.pop_front();
         
            while(!q.empty() && arr[q.back()]<arr[i])
                q.pop_back();
                
            q.push_back(i);
            v.push_back(arr[q.front()]);
        }
        return v;
    }