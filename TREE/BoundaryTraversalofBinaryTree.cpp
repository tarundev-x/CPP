void leftview(Node* root,vector<int> &v)
{
    if(root==NULL || (root->left==NULL && root->right==NULL)) return;
    
    v.push_back(root->data);
    if(root->left)
    {
        leftview(root->left,v);
     }
     else
     {
        leftview(root->right,v);
    }
}
void leaf(Node* root,vector<int>&v)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
    {
        v.push_back(root->data);
        return;
    }
    leaf(root->left,v);
    leaf(root->right,v);
}
void rightview(Node* root,vector<int>&v)
{
    if(root==NULL ||(root->left==NULL && root->right==NULL)) return ;
  
    if(root->right)
    {
        rightview(root->right,v);
        
    }
    else 
    {
        rightview(root->left,v);
    }
      v.push_back(root->data);
}
    vector <int> boundary(Node *root)
    {
        //Your code here
          vector<int>v;
        if(root==NULL) return v;
        v.push_back(root->data);
      
        leftview(root->left,v);
        leaf(root->left,v);
        leaf(root->right,v);
        rightview(root->right,v);
        return v;
        
    }
