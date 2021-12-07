class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
       int count=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
       ListNode *temp1=head;
        count=count/2;
        if(count==0)
        {
            head=temp1->next;
            delete temp1;
            return head;
            
        }
        for(int i=0;i<count-1;i++)
        {
            temp1=temp1->next;
        }
        ListNode* temp2=temp1->next;
            temp1->next=temp2->next;
        delete temp2;
        return head;
        
    }
};
