//The 3rd element must be greater than first and smaller than second.	

bool recreationalSpot(int arr[], int n)
{
        stack<int>st;
        int k=INT_MIN;
        
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]<k) 
                return true;
            else while(!st.empty() && arr[i]>st.top())
            {
                k=st.top();
                st.pop();
            }
            st.push(arr[i]);
        }
        return false;
}
