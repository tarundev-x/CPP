 vector<int> levelOrder(Node* node)
    {
      //Your code here
    vector<int>vt;
      if(node==NULL)
      {
          return vt;
      }
      queue<Node *>q;
      q.push(node);
      while(q.empty()!=true)
      {
          Node *curr = q.front();
          q.pop();
          vt.push_back(curr->data);
          if(curr->left != NULL)
          {
              q.push(curr->left);
          }
          if(curr->right!=NULL)
          {
              q.push(curr->right);
          }
          
      }
      return vt;
     
