A[]- Plates
B[]- Coins per plates
T- Maximum number of plates 


int maxCoins(int A[], int B[], int T, int N) 
    {
        vector<pair<int,int>>v;
        for(int i=0;i<N;i++)
            v.push_back({B[i],A[i]});
            
        sort(v.begin(),v.end());
        
        int sum=0,i=0;
        for(int i=N-1;i>=0;i--)
        {
            if(T==0)
                break;
            
            if(v[i].second<=T)
            {
                sum+=v[i].first*v[i].second;
                T=T-v[i].second;
            }
            else
            {
                sum+=v[i].first*T;
                break;
            }
        }
        return sum;
    }