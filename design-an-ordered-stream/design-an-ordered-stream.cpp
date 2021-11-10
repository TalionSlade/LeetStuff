class OrderedStream {
public:
    
    vector<string>result;
    int ptr;
    OrderedStream(int n) {
        result.resize(n);
        ptr = 1;
    }
    
    vector<string> insert(int id, string value) {
        result[id-1] = value;
        vector<string> answer;
        
        if(ptr == id) {
            int i = ptr - 1;
            
            for(; i < result.size(); i++) {
                if(result[i] == "")
                    break;
                answer.push_back(result[i]);
            }
            ptr = i+1;
        }
        return answer;
    }
};