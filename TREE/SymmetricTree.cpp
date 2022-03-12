bool sol(Node* root1,Node* root2)
    {
         if(root1==NULL &&root2==NULL) return true;
         
         if(root1==NULL || root2==NULL) return false;
         if(root1->data!=root2->data) return false;
         else
         {
             bool ans=sol(root1->left,root2->right);
             bool ans2=sol(root2->right,root1->left);
             return (ans && ans2);
         }
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    if(root==NULL) return true;
	     bool temp=sol(root,root);
	     return temp;
    }
};
