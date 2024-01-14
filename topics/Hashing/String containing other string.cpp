Smallest window in a string containing all the characters of another string

string smallestWindow (string s, string p)
    {
        if(p.length()>s.length())
            return "-1";
            
        int count=0;
        map<char,int>m;
        
        for(int i=0;i<p.length();i++)
        {
            m[p[i]]++;
            if(m[p[i]]==1)
                count++;
        }
        
        int res=INT_MAX;
        int i=0,j=0,st=0;
        
        while(j<s.length())
        {
            m[s[j]]--;
            if(m[s[j]]==0)
                count--;
                
            while(count==0)
            {
                if(j-i+1<res)
                {
                    res=j-i+1;
                    st=i;
                }
                m[s[i]]++;
                if(m[s[i]]==1)
                    count++;
                i++;
            }
            j++;
        }
        
        if(res==INT_MAX)
            return "-1";
        return s.substr(st,res);
    }