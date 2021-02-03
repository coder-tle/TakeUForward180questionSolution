
/*

    Use two pointers, walker and runner.
    walker moves step by step. runner moves two steps at time.
    if the Linked List has a cycle walker and runner will meet at some
    point.

*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode *, bool> hmap;
        ListNode * temp;
        temp = head;
        
        while(temp != NULL){
            if(hmap.find(temp) != hmap.end()){
                return true;
            }
            hmap[temp] = true;
            temp = temp->next;
            
        }
        return false;
        
    }
};
