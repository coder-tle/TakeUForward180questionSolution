class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode * temp, * prev;
        
        temp = node;
        while(temp->next != NULL)
        {
            prev = temp;
            temp->val = temp->next->val;
            temp = temp->next;
            
        }
        prev->next = NULL;
    }
};
