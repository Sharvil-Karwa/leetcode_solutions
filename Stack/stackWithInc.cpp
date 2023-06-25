class CustomStack {
public:

    vector<int> arr;
    int n;
    int c = 0;

    CustomStack(int maxSize) {
        n = maxSize;
        arr.resize(n);
    }
    
    void push(int x) {
        if(c<n){
            arr[c++] = x;
        }
    }
    
    int pop() {
        if(c>0) return arr[--c];
        return -1;
    }
    
    void increment(int k, int val) {
        if(c<k){
            for(int i=0;i<c;i++) arr[i]+=val;
        } 
        else{
            for(int i=0;i<k;i++) arr[i]+=val;
        }
    }
};