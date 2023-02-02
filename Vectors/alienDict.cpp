class Solution {
public:
    bool isAlienSorted(vector<string>& w, string o) {
        for(int i=0;i<w.size()-1;i++){
            int j = 0;
            while(j<w[i].size() && w[i][j]==w[i+1][j]) j++;
            if(w[i].size()==j) continue;
            if(j==w[i+1].size()) return false;
            if(o.find(w[i+1][j])<o.find(w[i][j])) return false;
        } 
        return true;
    }
};