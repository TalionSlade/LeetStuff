
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        auto *temp_head = head;
        auto *slow = head;
        auto *fast = head;
        
        if(head==NULL){   
            return NULL;    
        }
        int size =0;
        while(temp_head!=NULL){
            size++;
            temp_head = temp_head->next;
        }
        int t = k%size;        
        while(t--){
            fast = fast->next;
        }        
        while(fast->next != NULL ){
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = head;
        auto *newhead = slow->next;
        slow->next = NULL;
        return newhead;
        
    }
};