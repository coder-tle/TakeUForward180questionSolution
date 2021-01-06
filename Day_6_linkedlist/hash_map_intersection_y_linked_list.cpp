/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /*ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
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
        
        
        
        
    }*/
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
        ListNode * tempA = headA, *tempB = headB, * res = NULL;
        
        unordered_map<ListNode *, bool> hmap;
        
        while(tempA != NULL)
        {
            hmap[tempA] = true;
            tempA = tempA->next;
            
        }
        
        while(tempB != NULL)
        {
            if(hmap.find(tempB) != hmap.end())
            {
                res = tempB;
                break;
            }
            tempB = tempB->next;
        }
        return res;
    }
    
};
