
class Solution {
public:
    bool hasCycle(ListNode *head) {
        auto *fast = head, *slow = head;
        if(fast == NULL || fast->next  == NULL ) return false;
        while(fast->next!= NULL && fast->next->next != NULL ){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
            
        }
        return false;
    }
};