bool inorder(Node* root1, Node* root2)
    {
        if(!root1 && !root2)
            return 1;
        if((root1 && !root2) || (!root1 && root2))
            return 0;
        if(root1->data != root2->data)
            return 0;
        
        return (inorder(root1->left,root2->right) && inorder(root1->right,root2->left));
    }

    bool isSymmetric(struct Node* root)
    {
	    if(!root)
	       	return 1;
	    return inorder(root->left,root->right);
    }