class Solution {
public:
    long long smallestNumber(long long num) {
        if(num<10 && num>-10) return num;
        bool neg = true;
        if(num>=0) neg = false;
        num = abs(num);
        priority_queue<int> pq;
        while(num>0) { pq.push(num%10); num/=10; }
        if(pq.size()==1) return num;
        long long ans = 0;
        while(!pq.empty()){
            ans = ans*10 + pq.top();
            pq.pop();
        } 
        if(neg) return -1*ans;
        string s = to_string(ans);
        reverse(s.begin(), s.end());
        int i = 0;
        int c = 0;
        while(i<s.size() && s[i]=='0'){
            c++;
            i++;
        } 
        string s2 = "";
        s2+=s[i];
        while(c!=0){
            s2+="0";
            c--;
        } 
        for(int x=i+1;x<s.size();x++) s2+=s[x];
        ans = 0;
        for(int i=0;i<s2.size();i++){
            string t = "";
            t+=s2[i];
            ans = ans*10 + stoi(t);
        }
        return ans;
    }
};