 void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node* dummy=new Node(-1);
        dummy->next=head;
        Node*slow=dummy;
        Node*fast=dummy;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                break;
            }
        }
        if(slow!=fast) return;
        Node* nm=dummy;
        while(nm->next!=slow->next)
        {
            slow=slow->next;
            nm=nm->next;
        }
        if(nm->next==slow->next)
        {
            slow->next=NULL;
        }
    }
