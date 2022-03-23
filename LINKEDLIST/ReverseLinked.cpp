Node* rotate(Node* head, int k)
    {
        if(!head || !head->next ||k==0) return head;
        // Your code here
        Node* temp1=head;
       
       
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
         
        }
        temp1->next=head;
        
        while(k--)
        {
            temp1=temp1->next;
        }
        head=temp1->next;
        temp1->next=NULL;
        return head;
    }
