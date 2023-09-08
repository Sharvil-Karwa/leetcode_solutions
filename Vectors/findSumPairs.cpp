class FindSumPairs {
public: 

    unordered_map<int, int> m1;
    unordered_map<int, int> m2;
    vector<int> n2;

    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        n2 = nums2;
        for(auto i:nums1) m1[i]++;
        for(auto i:nums2) m2[i]++;
    }
    
    void add(int index, int val) {
        m2[n2[index]]--;
        n2[index]+=val;
        m2[n2[index]]++;
    }
    
    int count(int tot) {
        int c = 0;
        for(auto i:m1){
            if(m2.find(tot-i.first)!=m2.end()){
                c+=(i.second)*m2[tot-i.first];
            }
        } 
        return c;
    }
};
