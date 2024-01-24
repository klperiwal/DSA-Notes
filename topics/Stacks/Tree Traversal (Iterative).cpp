* Inorder Traversal:

vector<int> inOrder(Node* root)
    {
        vector<int>v;
        stack<Node*>s;
        
        while(1)
        {
            if(root)
            {
                s.push(root);
                root=root->left;
            }
            else
            {
                if(s.empty())
                    return v;
                    
                root=s.top();
                s.pop();
                v.push_back(root->data);
                root=root->right;
            }
        }
        return v;
    }


* Postorder Traversal:
vector<int> postOrder(Node* node) 
{
        vector<int>v;
        stack<Node*>s;
        s.push(node);
        
        while(!s.empty())
        {
            Node *temp=s.top();
            v.push_back(temp->data);
            s.pop();
            
            if(temp->left)
                s.push(temp->left);
            if(temp->right)
                s.push(temp->right);
            
        }
        reverse(v.begin(),v.end());
        return v;
    }


* Preorder Traversal:

vector<int> preOrder(Node* root)
{
        vector<int>v;
        stack<Node*>s;
        s.push(root);
        
        while(!s.empty()) 
        {
            root = s.top();
            s.pop(); 
            if(root->right)
                s.push(root->right);
            if(root->left)
                s.push(root->left);
                
            v.push_back(root->data);
        }
        return v;
}