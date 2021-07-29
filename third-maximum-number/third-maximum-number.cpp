class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map<int , int> table;
        auto it =  nums.begin();        
        while(it  != nums.end()){
            if(table.find(*it)==table.end())
            table.insert(pair<int,int>(*it,*it));
            if(table.size()>3){
                cout<<"i was here" <<endl;
                table.erase(table.begin()->first);
            }  
            ++it;
        }
        int max =0;
        for( auto it2 = table.begin(); it2 != table.end() ; it2++ ){
            cout<<it2->first<<endl;
            max = it2->first;
        }
        if(table.size()<3){
            return(max);
        }    
        return(table.begin()->first);
    }
};