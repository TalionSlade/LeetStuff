class Solution {
public:
    
    bool isunique(string s1, string s2){
        
        set<char> s1_set(begin(s1), end(s1));
        set<char> s2_set(begin(s2), end(s2));
        if(s1_set.size()!=s1.size() or s2_set.size() != s2.size()) return false;
        unordered_map<char,int> m;
        if(s1.size()==0 || s2.size()==0) return true;
        
        for(auto ch :s1)
            m[ch]++;
        for(auto ch : s2){
            if(m[ch] >= 1)return false;
        }
        return true;
    }
    
    int f(int n, vector<string>& arr, string curr){        
        //base case
        if(n == arr.size()){
            return curr.size();
        }         
        //recurrence
        //pick
        int pick = 0;
        if(isunique(curr,arr[n]) == 1)
        pick = f(n+1,arr,curr+arr[n]);
        //nonpick
        int nonpick = f(n+1,arr,curr);
        cout<<pick<<"  "<<nonpick<<endl;
        return(max(pick,nonpick));                   
    }
    
    
    
    int maxLength(vector<string>& arr) {
        int n = arr.size();
        return f(0,arr,"");
        //cout << isunique("un","ue")<<endl;
        //return 0;
    }
};