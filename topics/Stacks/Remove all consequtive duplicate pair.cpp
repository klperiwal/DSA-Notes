string removePair(string s) 
{ 
        string res="";
        stack<char>st;
        
        for(int i=0;i<s.length();i++)
        {
            char x=s[i];
            if(!st.empty() && st.top()==x)
                st.pop();
            else
                st.push(x);
        }
        
        if(st.empty())
            return "-1";
            
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }