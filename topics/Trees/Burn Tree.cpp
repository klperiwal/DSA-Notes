--> Minimum time to burn a tree from a given Node:

    int res=0;
    int burntree(TreeNode* root, int target, int &d)
    {
        if(!root)
            return 0;
        
        int ld=-1, rd=-1;
        int lh=burntree(root->left,target,ld);
        int rh=burntree(root->right,target,rd);
        
        if(root->val== target)
        {
            d=0;
            res=max(res,max(lh,rh));
            return 1;
        }
        
        if(ld!=-1)
        {
            d=ld+1;
            res=max(res,d+rh);
            
        }
        if(rd!=-1)
        {
            d=rd+1;
            res=max(res,d+lh);
        }
        
        return 1+max(lh,rh);
    }

    int amountOfTime(TreeNode* root, int start) {
        int d=-1;
        burntree(root,start,d);
        return res;
    }