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
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        auto *p = head;//slow
        auto *q = head;//fast
        while(q){
            if(q->next == NULL){
                p=p->next;
                break;
            }
            st.push(p->val);
            p = p->next;
            q = q->next->next;
        }
        
        while(p){
            if(p->val != st.top())return false;
            p = p->next;
            st.pop();
            
        }
        return true;        
        
        
        
        
        
        // deque<int>q;
        // ListNode* p=head;
        // while(p)
        // {
        //     q.push_back(p->val);
        //     p=p->next;
        // }
        // while(!q.empty())
        // {
        //     if(q.front()==q.back())
        //     {
        //         q.pop_front();
        //         if(!q.empty())
        //         q.pop_back();
        //     }
        //     else
        //     return false;
        // }
        // return true;
        
    }
};