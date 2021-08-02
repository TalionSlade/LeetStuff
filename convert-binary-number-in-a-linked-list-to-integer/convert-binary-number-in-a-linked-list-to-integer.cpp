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
    int getDecimalValue(ListNode* head) {
        auto *dummy = head;
        int sum = 0;
        while(dummy != NULL){
            sum = sum*2 + dummy->val;
            dummy = dummy->next;
        }
        return(sum);
        
    }
};