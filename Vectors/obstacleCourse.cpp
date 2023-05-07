class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        vector<int> ans;
        vector<int> seq;
        for (int obstacle : obstacles) {
            int idx = upper_bound(seq.begin(), seq.end(), obstacle) - seq.begin();
            if (idx == seq.size()) {
                seq.push_back(obstacle);
            } else {
                seq[idx] = obstacle;
            }
            ans.push_back(idx + 1);
        }
        return ans;
    }
};
