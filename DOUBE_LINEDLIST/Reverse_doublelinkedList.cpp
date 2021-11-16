
Node* reverseDLL(Node * head)
{
    Node* cur=head;
    if(cur==NULL ||cur->next==NULL) return head;
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    head=cur;
    cur->next=cur->prev;
    cur->prev=NULL;
    cur=cur->next;
    while(cur->prev!=NULL)
    {
        Node* temp=cur->next;
        cur->next=cur->prev;
        cur->prev=temp;
        cur=cur->next;
    }
    cur->prev=cur->next;
    cur->next=NULL;
    return head;
    //Your code here
}
