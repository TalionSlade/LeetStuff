class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> nums;
        
        //step-1: Convert LL to array
        while(head != NULL){  //nums: 1 2 3 4 5
            nums.push_back(head->val);
            // cout<<head->val<<endl;
            head = head->next;
        }
        
        //step-2: now find those two elements and swap
        int n = nums.size();
        cout<<nums[k-1] <<"\t" <<nums[n-k]<<endl;
        swap(nums[k-1], nums[n-k]);
        
      
        //step-3: convert back array to LL
        ListNode* cur = new ListNode(NULL);
        head = cur;
        for(int i=0; i<n; i++){
            cur->next = new ListNode(nums[i]);
            cur = cur->next;
        }    
        
        return head->next;
    }
};