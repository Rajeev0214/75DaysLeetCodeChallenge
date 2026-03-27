class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int dp[n];
        memset(dp, 0, sizeof(dp));
        for(int i=1; i<n; i++){
            int p = prices[i]-prices[i-1];
            if(p>0) dp[i] = p;
        }
        int sum=0;
        for(int i=0; i<n; i++) sum += dp[i];
        return sum;
    }
};