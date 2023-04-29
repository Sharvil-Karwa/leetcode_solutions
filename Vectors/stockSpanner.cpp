class StockSpanner {
public:

    vector<int> q;

    StockSpanner() {
    }
    
    int next(int price) {
        q.push_back(price);
        int ans = 0;
        for(int i=q.size()-1;i>=0;i--){
            if(q[i]<=price) ans+=1;
            else break;
        }
        return ans;
    }
};
