class Solution {
public:
    bool isPalindrome(ListNode* head) {
     ListNode * f = head, *s = head, *ptr;
        stack<ListNode *> st;
        
        while(  (f!=NULL) && (f->next != NULL))
        {
            st.push(s);
            f = f->next->next;
            s = s->next;
        }
        
        if( (f!= NULL) && (f->next == NULL))
        {
            ptr = s->next;
        }
        else
            ptr = s;
        
        bool palin = true;
        
        while(ptr != NULL && st.size() != 0)
        {
            if(ptr->val != st.top()->val)
            {
                palin = false;
                break;
            }
            ptr = ptr->next;
            st.pop();
        }
        
        return palin;
    }
};
