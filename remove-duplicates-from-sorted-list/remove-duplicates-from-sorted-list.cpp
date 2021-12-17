
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        //if(head == NULL)return head;
        auto dummy = head;
        while(dummy && dummy->next){
            if(dummy->val == dummy->next->val){
                dummy->next = dummy->next->next;
            }else{
                dummy = dummy->next;
            }
        }
        return head;
    }
};