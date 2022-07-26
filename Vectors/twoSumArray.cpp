class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int a = 0;
        int b = numbers.size()-1; 
        
        vector<int> ans;
        
        while(a<=b){
            int sum = numbers[a] + numbers[b];
            
            if(sum>target)
                b--;
            else if(target>sum)
                a++;
            else{
                ans.push_back(a+1);
                ans.push_back(b+1);
                break;
            }
        }
        
        return ans;
    }
};