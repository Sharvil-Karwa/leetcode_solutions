class MyHashMap {
public:

    vector<int> values;
    vector<int> keyValue;

    MyHashMap() {
        
    }
    
    void put(int key, int value) { 
        bool found = false;
        for(int i=0;i<keyValue.size();i++){
            if(keyValue[i]==key){
                values[i] = value;
                found = true;
                break;
            }
        } 
        if(!found){
            keyValue.push_back(key);
            values.push_back(value);
        }
    }
    
    int get(int key) {
        int value = -1;
        for(int i=0;i<keyValue.size();i++){
            if(keyValue[i]==key){
                value = values[i];
                break;
            }
        } 
        return value;
    }
    
    void remove(int key) {
        for(int i=0;i<keyValue.size();i++){
            if(keyValue[i]==key){
                keyValue.erase(keyValue.begin()+i);
                values.erase(values.begin()+i);
                break;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */