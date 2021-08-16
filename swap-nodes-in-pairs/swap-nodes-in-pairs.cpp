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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;               
        ListNode* newhead = new ListNode(0);
        newhead->next =head;
        auto *it  = newhead , *temp = newhead;
        while(it->next!= NULL and it->next->next!=NULL){
            temp = it->next;
            it -> next = it->next ->next;
            temp->next = it->next->next;
            it->next->next = temp;   
            it = it->next->next;
        }
        return newhead->next;
    }
};