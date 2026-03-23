class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int i = 0, cnt = 0;
        int t = 0;
        int idx = 0;
        for (i = 0; i < n - 1; i++) {
            t = max(t, i + nums[i]);
            if (i == idx) {
                cnt++;
                idx = t;
            }
        }
        return cnt;
    }
};