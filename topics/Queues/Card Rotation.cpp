vector<int> rotation(int n)
    {
        vector<int>v(n,-1);
        queue<int>q;
        for(int i=0;i<n;i++)
            q.push(i);

        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<(i%q.size());j++)
            {
                q.push(q.front());
                q.pop();
            }
            v[q.front()]=i;
            q.pop();
        }
        return v;
    }