class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        
        if(changed.size()%2) return ans;
        
        unordered_map <int,int> m;
        sort(changed.begin(),changed.end());
        
        for(auto i:changed){
            if(m.find(i)==m.end()){
                m[i] = 1;
            }
            else{
                m[i]++;
            }
        } 
        
        for(auto i:changed){
            if(m.find(i*2)!=m.end()){
                if(i==0){
                    if(m[i]>1){
                        m[i]--;
                        m[i]--;
                        ans.push_back(0);
                    }
                }
                else if(m[i*2]!=0 && m[i]!=0){
                    m[i*2]--;
                    m[i]--; 
                    ans.push_back(i);
                }
            }
        } 
        
        if(ans.size()!=changed.size()/2){
            vector<int> ans2;
            return ans2;
        }
        
        return ans;
    }
};