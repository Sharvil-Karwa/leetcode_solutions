class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& arr) {
        unordered_map<int, queue<int>> m;
        int n = arr.size();

        for(int i=0;i<n;i++){
            m[arr[i]].push(i);
        } 

        vector<vector<int>> ans;
        for(auto i:m){ 
            int k = i.first;
            vector<int> temp;
            while(!i.second.empty()){
                if(temp.size()==k) 
                {   
                    ans.push_back(temp);
                    temp.clear();
                } 
                temp.push_back(i.second.front());
                i.second.pop(); 
            } 
            if(temp.size()==k) 
            {   
                ans.push_back(temp);
                temp.clear();
            } 
        } 

        
        return ans;
    }
};