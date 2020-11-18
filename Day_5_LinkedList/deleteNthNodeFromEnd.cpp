class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode * prev, *slow, *fast;
        if(head == NULL)
            return head;
        fast = head;
        int i;
        for(i = 1; i<=n && fast != NULL; i++)
            fast = fast->next;
        
        prev = NULL, slow = head;
        
        if(fast == NULL && i != n+1)
            return head;
        
        while(fast != NULL)
        {
            fast = fast->next;
            prev = slow;
            slow = slow->next;
        }
        
        if(prev == NULL)
            head = slow->next;
        else
            prev->next = slow->next;
        return head;
    }
};
