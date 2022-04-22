class MyHashMap {
    
    vector<int> v;
public:
    MyHashMap() {
        v.resize(1e6+1,-1);
    }
    
    void put(int key, int value) {
        v[key]=value;
    }
    
    int get(int key) {
        return v[key];
    }
    
    void remove(int key) {
        v[key]=-1;
    }
};