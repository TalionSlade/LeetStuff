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
        deque<int>q;
        ListNode* p=head;
        while(p)
        {
            q.push_back(p->val);
            p=p->next;
        }
        while(!q.empty())
        {
            if(q.front()==q.back())
            {
                q.pop_front();
                if(!q.empty())
                q.pop_back();
            }
            else
            return false;
        }
        return true;
        
    }
};