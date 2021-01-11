 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
        ListNode * tempA = headA, *tempB = headB, * res = NULL;
        
        unordered_map<ListNode *, bool> hmap;
        
        while(tempA != NULL || tempB != NULL)
        {
            if(tempA != NULL){
                if(hmap.find(tempA) != hmap.end()){
                    res = tempA;
                    break;
                    }
                else if(hmap.find(tempA) == hmap.end()){
                    hmap[tempA] = true;
                    tempA = tempA->next;
                }
            }
             if(tempB != NULL){
                if(hmap.find(tempB) != hmap.end()){
                    res = tempB;
                    break;
                    }
                else if(hmap.find(tempB) == hmap.end()){
                    hmap[tempB] = true;
                    tempB = tempB->next;
                }
       
            }
        }
        
        return res;
    }
