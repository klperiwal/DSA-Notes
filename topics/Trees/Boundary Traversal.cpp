Traverse the boundary elements in anti-clockwise direction:

    bool isleaf(Node*root)
    {
        if(!root->left && !root->right)
            return 1;
        return 0;
    }
    void addright(Node* root,vector<int>&res)
    {
        if(!root)
            return;
        
        vector<int>temp;
        Node*curr=root->right;
        while(curr)
        {
            if(!isleaf(curr))
                temp.push_back(curr->data);
            if(curr->right)
                curr=curr->right;
            else
                curr=curr->left;
        }
        for(int i=temp.size()-1;i>=0;i--)
            res.push_back(temp[i]);
            
    }
    void addleaf(Node* root, vector<int>&res)
    {
        if(!root)
            return;
            
        if(isleaf(root))
            res.push_back(root->data);
            
        addleaf(root->left,res);
        addleaf(root->right,res);
    }
    void addleft(Node* root, vector<int>&res)
    {
        if(!root)
            return;
            
        Node*curr=root->left;
        while(curr)
        {   
            if(!isleaf(curr))
                res.push_back(curr->data);
            if(curr->left)
                curr=curr->left;
            else
                curr=curr->right;
        }
    }

    vector <int> boundary(Node *root)
    {
        vector<int>res;
        if(!root)
            return res;
        res.push_back(root->data);
        if(isleaf(root))
            return res;
            
        addleft(root,res);
        addleaf(root,res);
        addright(root,res);
        return res;
    }