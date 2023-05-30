class MyHashSet {
public:
    vector<int>hs;
    MyHashSet() {
        
    }
    
    void add(int key) {
        for(auto i : hs)if(i == key)return;
        hs.push_back(key);
    }
    
    void remove(int key) {
        for(int i=0;i<hs.size();i++){
            if(hs[i] == key)hs.erase(hs.begin()+i);
        }
    }
    
    bool contains(int key) {
        for(auto i:hs){
            if(i == key)return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
