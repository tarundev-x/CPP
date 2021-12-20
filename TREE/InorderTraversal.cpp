class Solution {
public:
    void inorder(TreeNode* root,vector<int>& in){
        if(root==NULL) return;
        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> in;
        inorder(root,in);
        return in;
    }
};


-----postorder traversal------
    class Solution {
public:
    void postorder(TreeNode*root,vector<int>&v)
    {
        if(root==NULL) return ;
        
        postorder(root->left,v);
        postorder(root->right,v);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        postorder(root,v);
        return v;
        
    }
};
-----preorder-----
    class Solution {
public:
    void postorder(TreeNode*root,vector<int>&v)
    {
        if(root==NULL) return ;
        
         v.push_back(root->val);
        postorder(root->left,v);
        postorder(root->right,v);
       
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        postorder(root,v);
        return v;
        
    }
};
