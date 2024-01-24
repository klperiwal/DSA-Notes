vector<int> nextLargerElement(vector<int>arr)
{
	int n=arr.size();        
        vector<int>v(n,-1);
        stack<int>s;
        s.push(arr[n-1]);

        for(int i=n-2;i>=0;i--)
        {
            while(!s.empty() && arr[i]>=s.top())
                s.pop();
            
            if(s.empty())
                v[i]=-1;
            else    
                v[i]=s.top();
                
            s.push(arr[i]);
        }
        return v;       
    }