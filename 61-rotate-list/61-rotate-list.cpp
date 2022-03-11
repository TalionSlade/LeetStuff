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
    
    ListNode* rotateonce(ListNode* head){
        ListNode *p ,*q ;
        p = head;
        while(p->next != NULL){
            q = p;
            p = p->next;
        }
        p->next = head;
        q->next = NULL;
        return p;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head ==  NULL or head->next == NULL)return head;
        
        int length = 0;
        ListNode* p =  head;
        while(p!=NULL){
            length++;
            p = p->next;
        }
        k = k % length;
        for(int i=0;i<k;i++){
            head = rotateonce(head);
        }
        return(head);
    }
};