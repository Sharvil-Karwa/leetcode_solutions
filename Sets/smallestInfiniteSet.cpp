class SmallestInfiniteSet {
public: 

    set<int> s;
    int mi = 1;

    SmallestInfiniteSet() {
        
    }
    
    int popSmallest() {
        s.insert(mi);
        int y = mi;
        int x = mi + 1;
        while(s.find(x)!=s.end()){
            x += 1;
        } 
        mi = x;
        return y;
    }
    
    void addBack(int num) {
        if(s.find(num)!=s.end()){
            s.erase(s.find(num)); 
            mi = min(num,mi);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */