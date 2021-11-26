class Solution {
public:
     vector<vector<int>> pathmat;
    void printv(vector<int> v){
        auto it = v.begin();
        while(it!= v.end()){
            int temp = *it;
            cout<<temp<<"  ";
            it++;
        }
        cout<<endl;
    }
    
    
    void traversal(vector<vector<int>> g, int i , vector<int> path_yet){
        //path_yet is the backtracked stack;
        path_yet.push_back(i);
        
        //base case covered
        //DAG is mentioned. so no infinite cycles
        if(i == g.size()-1 ){
            printv(path_yet);
            pathmat.push_back(path_yet);
            return;
        }      
        auto it = g[i].begin();
        while(it!= g[i].end()){
           // ok nice. got it
            traversal(g, *it , path_yet);  
            it++;
        }
        
        
    }   
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {         
        vector<int> v;       
        traversal(graph , 0 ,v);
        return pathmat;
    }
};