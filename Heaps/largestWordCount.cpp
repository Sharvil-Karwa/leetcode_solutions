class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string, int> m;
        for(int i=0;i<senders.size();i++){
            int c = 1;
            for(auto j:messages[i]){
                if(j==' ') c++;
            } 
            m[senders[i]]+=c;
        } 
        priority_queue<string> s;
        int c = INT_MIN;
        for(auto i:m) c = max(c, i.second);
        for(auto i:m) if(i.second==c) s.push(i.first);  
        return s.top();
    }
};