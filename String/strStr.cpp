class Solution {
public:
    int strStr(string haystack, string needle) { 
        
        if(haystack.size()<needle.size()) return -1;
        
        for(int i=0;i<haystack.size()-needle.size()+1;i++){
            string s = "";
            for(int j=0;j<needle.size();j++){
                s+=haystack[i+j];
            }  
            if(s==needle){
                return i;
            }
        } 
        return -1;
    }
};