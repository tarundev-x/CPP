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
..............................
 Input:
N = 3
value[] = {1,3,4}
X = 2
Output: 1
Explanation: The link list looks like
1 -> 3 -> 4
     ^    |
     |____|    
A loop is present. If you remove it 
successfully, the answer will be 1.
