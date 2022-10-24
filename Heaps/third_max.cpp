class Solution {
public:
    int thirdMax(vector<int>& v2) {
        set<int> v3(v2.begin(), v2.end());
        vector<int> v1(v3.begin(),v3.end());
        int size = v1.size();
        if(size==1) return v1[0];
        if(size==2) return max(v1[0],v1[1]);
        make_heap(v1.begin(), v1.end());
        pop_heap(v1.begin(), v1.end());
        v1.pop_back();
        pop_heap(v1.begin(), v1.end());
        v1.pop_back();
        return v1.front();
    }
};