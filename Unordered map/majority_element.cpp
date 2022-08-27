class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
                m[nums[i]] = 1;
            }
            else{
                m[nums[i]]++;
            }
        } 
        int max = 0;
        int ans = 0;
        for(auto i:m){
            if(i.second>max){
                max = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};