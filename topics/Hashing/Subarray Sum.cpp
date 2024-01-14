vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int i=0,j=0;
        long long sum=0;

        while(i<n && j<n)
        {
            if(sum<s)
                sum+=arr[j++];
            else if(sum>s)
                sum-=arr[i++];  
            else
                break;
        }

        while(i<n && sum>s)
            sum-=arr[i++];       
        if(sum==s)
            return {i+1,j};
        
        return {-1};
    }