//Function is largest Rectangle in Histogram
    int func(vector<int>&v)
    {
        stack<int> st;
        int top,res=0;
        v.push_back(0);   
        for(int i=0;i<=v.size();i++)
        {
            while(!st.empty() && v[st.top()]>v[i])
            {
                top=v[st.top()];
                st.pop();
                int ran=st.empty()?-1:st.top();
                res=max((i-ran-1)*top,res);
            }
            st.push(i);
        }
        return res;
    }
    
    int maxArea(int M[MAX][MAX], int n, int m) 
    {
        int maxarea=0;
        vector<int>v(m+1,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(M[i][j])
                    v[j]++;
                else
                    v[j]=0;
            }
            maxarea=max(maxarea,func(v));
        }  
        return maxarea;
    }