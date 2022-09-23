class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
                m[nums[i]] = 1;
            }
            else{
                if(m[nums[i]]==1){
                    m[nums[i]]++;
                }
                else{
                    nums.erase(nums.begin()+i);
                    i--;
                }
            }
        }
        return nums.size();
    }
};