class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int ans=0;
        int sum=0;
        for(int i=satisfaction.size()-1;i>=0;i--){
            int k = 1;
            for(int j=i;j<satisfaction.size();j++){
                sum+=k*satisfaction[j];
                k++;
            } 
            if(sum<ans) return ans;
            ans = sum;
        }
        return ans;
    }
};