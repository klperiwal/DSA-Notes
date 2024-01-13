vector<int> bottomView(Node *root)
    {
       if(!root)
            return {};
            
        vector<int>ans; 
        queue<pair<Node*,int>>q; 
        map<int,vector<int>>m; 
        q.push({root,0});
        
        while(!q.empty())
        {
            int n=q.size(); 
            while(n--)
            {
                Node* ptr=q.front().first;
                int level=q.front().second; 
                q.pop();
                m[level].push_back(ptr->data); 
                
                if(ptr->left)
                    q.push({ptr->left,level-1});
                if(ptr->right)
                    q.push({ptr->right,level+1});
            }
        }
        for(auto it:m)
            ans.push_back(it.second.back());
        
        return ans ;
    }
