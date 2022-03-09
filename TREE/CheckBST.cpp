 bool bst(TreeNode* root,double min,double max)
    {
        if(root==NULL) return true;
        
        if(root->val>=max || root->val<=min) return false;
        
        return bst(root->left,min,root->val)&& bst(root->right,root->val,max);
        
    }
    bool isValidBST(TreeNode* root) {
        
        return bst(root,-DBL_MAX,DBL_MAX);
    }
