class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * tempA = headA, * tempB = headB;
        ListNode * res = NULL;
        while(tempA != NULL) // && tempA->val != tempB->val)
        {
            tempB = headB;
            while(tempB != NULL && tempA != tempB)
            {
                tempB = tempB->next;
            }
            if(tempA == tempB)
            {
                res = tempB;
                break;
            }
            tempA = tempA->next;
        }
        return res;
        
        
        
        
    }
};
