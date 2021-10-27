class Solution {
public:
    int trap(vector<int>& a) {
        stack<int> st;
        int ans = 0;
        for(int i = 0; i< a.size() ;i++){
            while(!st.empty() and a[st.top()] < a[i]){
                int cur = st.top();//index of current
                st.pop();
                //st empty means nothing to support on left side
                if(st.empty()){
                    break;
                }
                int diff = i - st.top() -1;
                ans += (min(a[st.top()],a[i]) - a[cur])*diff;
            }
            st.push(i);
        }
        return ans;
    }
};