vector<int> topView(Node *root)
    {
        if(root==NULL)
            return {};
        
        vector<int>res;
        queue<pair<Node*,int>>q;
        map<int,int>m;
        
        q.push({root,0});
        while(!q.empty())
        {
            auto a=q.front().first;
            auto b=q.front().second;
            q.pop();
            
            if(m.find(b)==m.end())
                m[b]=a->data;
            
            if(a->left)
                q.push({a->left,b-1});
            if(a->right)
                q.push({a->right,b+1});
        }
        
        for(auto i:m)
            res.push_back(i.second);
            
        return res;
    }