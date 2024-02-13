#define ll long long
ll minCost(ll arr[], int n) 
{
        priority_queue<ll,vector<ll>,greater<ll>>pq;
        for(int i=0;i<n;i++)
            pq.push(arr[i]);
            
        ll res=0;
        while(pq.size()>1)
        {
            long sum=0;
            sum+=pq.top();
            pq.pop();
            sum+=pq.top();
            pq.pop();
            res+=sum;
            pq.push(sum);
        }
        return res;
    }