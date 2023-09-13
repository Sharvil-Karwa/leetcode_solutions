class AuthenticationManager {
public:

    unordered_map<string, int> m;
    int ttl;

    AuthenticationManager(int tt) {
        ttl = tt;
    }
    
    void generate(string tokenId, int ct) {
        m[tokenId] = ct + ttl;
    }
    
    void renew(string tokenId, int ct) {
        if(m.find(tokenId)!=m.end()) if(m[tokenId]>ct)m[tokenId] = ct + ttl;
    }
    
    int countUnexpiredTokens(int ct) {
        vector<string> temp;
        int ans = 0;
        for(auto i:m){
            if(i.second>ct) ans++;
            else temp.push_back(i.first);
        } 
        for(auto i:temp){
            m.erase(i);
        }
        return ans;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */