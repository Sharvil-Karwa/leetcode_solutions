class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> win;
        unordered_map<int,int> lose;
        for(auto i:matches){
            if(win.find(i[0])==win.end()){
                win[i[0]] = 1;
            }
            else{
                win[i[0]]++;
            }
            if(lose.find(i[1])==lose.end()){
                lose[i[1]] = 1;
            }
            else{
                lose[i[1]]++;
            }
        } 
        vector<int> winners;
        vector<int> lostOnce;

        for(auto i:win){
            if(lose.find(i.first)==lose.end()){
                winners.push_back(i.first);
            }
        } 
        for(auto i:lose){
            if(i.second==1){
                lostOnce.push_back(i.first);
            }
        } 
        sort(winners.begin(),winners.end());
        sort(lostOnce.begin(),lostOnce.end());
        vector<vector<int>> ans;
        ans.push_back(winners);
        ans.push_back(lostOnce);
        return ans;
    }
};