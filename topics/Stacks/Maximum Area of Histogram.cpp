-- An alternative way to solve this problem:
	Fnd the right smaller and the lefty smaller of the element.
	ans=max (ans, index of(rs-ls-1)*arr[i])
	where, arr[i]=height of current histogram.

long long getMaxArea(long long arr[], int n)
    {
        long long sum = 0;
        stack<long long>s;
        for(int i = 0; i <= n; i++)
        {
            while(!s.empty() && (i == n || arr[s.top()] > arr[i]))
            {
                long long h = arr[s.top()];
                s.pop();
                long long w=i;
		if(s.emtpy())
		    w=i-s.top()-1;
                sum = max(sum, h*w);
            }
            s.push(i);
        }
        return sum;
    }