class Solution {
public:
    bool isVowel(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    } 

    int maxVowels(string s, int k) {
        int ans;
        int i = 0;
        int j = k-1; 
        int vc = 0;
        for(int y = i;y<=j;y++){
            if(isVowel(s[y])) vc+=1;
        }
        ans = vc;
        while(j<s.size()){
            if(isVowel(s[i]))vc-=1;
            i+=1;
            j+=1;
            if(isVowel(s[j])) vc+=1;
            ans = max(ans,vc);
        }
        return ans;
    }
};