/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     ListNode * res = NULL, *temp, *t1, *t2, *prev;
        int sum, carry = 0;
        t1 = l1;
        t2 = l2;
        
        while(t1!= NULL && t2 != NULL)
        {
            sum = t1->val + t2->val + carry;
            carry = 0;
            if(sum > 9)
            {
                carry = 1;
                sum -= 10;
            }
            temp = new ListNode(sum);
            
            if(res == NULL)
            {
                res = temp;
            }
            else{
            prev->next = temp;}
            prev = temp;
            t1 = t1->next;
            t2 = t2->next;
        }
        
        
        while(t1!= NULL && t2 == NULL)
        {
            sum = t1->val +  carry;
            carry = 0;
            if(sum > 9)
            {
                carry = 1;
                sum -= 10;
            }
            temp = new ListNode(sum);
            
            if(res ==NULL)
            {
                res = temp;
            }
            else{
            prev->next = temp;}
            prev = temp;
            
            t1 = t1->next;
        }
        
        while(t1== NULL && t2 != NULL)
        {
            sum =  t2->val + carry;
            carry = 0;
            if(sum > 9)
            {
                carry = 1;
                sum -= 10;
            }
            temp = new ListNode(sum);
            
            if(res ==NULL)
            {
                res = temp;
            }
            else{
            prev->next = temp;}
            prev = temp;
            t2 = t2->next;
        }
        
        if(carry == 1)
        {
            temp = new ListNode(1);
            temp->next = NULL;
            carry = 0;
            if(res ==NULL)
            {
                res = temp;
            }
            else{
            prev->next = temp;}
            prev = temp;
            
        }
        return res;
    }
};
