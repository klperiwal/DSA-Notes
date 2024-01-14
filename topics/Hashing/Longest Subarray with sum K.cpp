If there exists no subarray return -1.

int lenOfLongSubarr(int arr[],int n,int K) 
    { 
        int sum=0, res=-1;
        map<int,int>m;
        
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum==K)
                res=i+1;
            else if(m.find(sum-K)!=m.end())
                res=max(res,i-m[sum-K]);
            
            if(m.find(sum)==m.end())
                m[sum]=i;
        }
        return res;
    } 