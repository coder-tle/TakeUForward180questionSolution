class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
     
        if(l1 == NULL && l2 == NULL)
            return NULL;
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        
        ListNode * res, * temp ;
        res = new ListNode();
        
        res->val = l2->val > l1->val ? l1->val : l2->val;
        
        if(l1->val > l2->val)
            l2 = l2->next;
        else
            l1 = l1->next;
        
        temp = res;
       
        while(l1 != NULL && l2 != NULL)
        {
               if(l1->val > l2->val)
               {
                   ListNode * t = new ListNode(l2->val);
                   temp->next = t;
                   temp = temp->next;
                   l2 = l2->next;
               }
                else
                {
                    ListNode * t = new ListNode(l1->val);
                    temp->next = t;
                    temp = temp->next;
                    l1 = l1->next;
                }
        }
        
        
        while(l1 != NULL)
        {
            ListNode * t = new ListNode(l1->val);
            temp->next = t;
            temp = temp->next;
            l1 = l1->next;
        }
        while(l2 != NULL)
        {
            ListNode * t = new ListNode(l2->val);
            temp->next = t;
            temp =  temp->next;
            l2 = l2->next;
        }
        temp->next = NULL;
        return res;
    }
};
