 int count(ListNode* head,stack<ListNode*>&st)
    {
        int c=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            st.push(temp);
            temp=temp->next;
            c++;
        }
        return c;
    }
    void reorderList(ListNode* head) {
        
        if(head->next==NULL || head->next->next==NULL) return;
        
        ListNode*first=head;
        
        stack<ListNode*>st;
       
        int x=count(first,st);
        
        int k=(x%2==0)?(x-1)/2:x/2;
        cout<<k<<" ";
        for(int i=0;i<k;i++)
        {
            ListNode*cur=first->next;
            first->next=st.top();
            st.top()->next=cur;
            st.pop();
            st.top()->next=NULL;
            first=cur;
        }
       
    }

...................
  You are given the head of a singly linked-list. The list can be represented as:

L0 → L1 → … → Ln - 1 → Ln
Reorder the list to be on the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
You may not modify the values in the list's nodes. Only nodes themselves may be changed.

 Input: head = [1,2,3,4,5]
Output: [1,5,2,4,3]
