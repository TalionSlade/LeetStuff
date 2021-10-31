class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL)
            return head;
        
        Node* cur=head;
        while(cur!=NULL){
            if(cur->child){
                Node* cur_next=cur->next;
                Node* child_pt=cur->child;
                cur->next=child_pt;
                child_pt->prev=cur;
                cur->child=NULL;
                while(child_pt->next)
                    child_pt=child_pt->next; 
                child_pt->next=cur_next; 
                if(cur_next)
                    cur_next->prev=child_pt;
            }
            cur=cur->next;
        }
        return head;
    }
};