class Solution {
    ListNode* merge(ListNode *l1,ListNode *l2)
    {
       ListNode*dummy=new ListNode(-1);
        ListNode*current=dummy;
        while(l1!=NULL&&l2!=NULL)
        {
            if(l1->val<=l2->val)
            {
                current->next=l1;
                l1=l1->next;
            }
            else
            {
                current->next=l2;
                l2=l2->next;
            }
            current=current->next;
        }
        if(l1!=NULL)
        {
            current->next=l1;
        }
        else
        {
            current->next=l2;
        }
        return dummy->next;
    }
    ListNode* middlenode(ListNode *head )
    {
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *mid=slow->next;
        slow->next=NULL;
        return mid;
    }
public:
    ListNode* sortList(ListNode* head) {
     if(head==NULL || head->next==NULL) return head;
       
    ListNode*mid =middlenode(head);
     ListNode *left=sortList(head);
        ListNode *right=sortList(mid);
        return merge(left,right);
    }
};
