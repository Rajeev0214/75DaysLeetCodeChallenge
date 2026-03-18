class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        int i=0, j=0;
        for(i=0; i<n-1; i++){
            int sum = 0;
            for(j=i+1; j<n; j++){
                sum = 0;
                sum = nums[i]+nums[j];
                if(sum == target) break;
            }
            if(sum == target) break;
        }
        return {i, j};
    }
};