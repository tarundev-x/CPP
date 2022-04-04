  ListNode* removeNthFromEnd(ListNode* head, int n) {
       
      
        ListNode *first=new ListNode();
        first->next=head;
        
         ListNode* slow=first;
        ListNode* fast=first;
        
        for(int i=0;i<n;i++)
        {
            fast=fast->next;
        }
        
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        slow->next=slow->next->next;
        return first->next;
    }
/////////////////////////////////
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
