class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        for(int i=0; i<intervals.size(); i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            int j;
            for(j=i; j<intervals.size(); j++){
                if(intervals[j][0]>end) break;
                else if(intervals[j][1]<end) {}
                else end = intervals[j][1];
            }
            vector<int> t;
            t.push_back(start);
            t.push_back(end);
            ans.push_back(t);
            i=j-1;
        }
        return ans;
    }
};