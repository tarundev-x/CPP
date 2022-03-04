 vector<int> preOrder(Node* root)
    {
        //code here
        vector<int>v;
        stack<Node*>st;
        st.push(root);
        while(!st.empty())
        {
            Node *curr = st.top();
          st.pop();
          v.push_back(curr->data);
          if(curr->right != NULL)
          {
              st.push(curr->right);
          }
          if(curr->left!=NULL)
          {
              st.push(curr->left);
          }
        }
        return v;
    }
