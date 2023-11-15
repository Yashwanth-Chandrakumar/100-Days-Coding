class Solution {
public:
    int minPathSum(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        int dp[m][200];
        dp[0][0]=arr[0][0];
        for(int i=1;i<m;i++){
            dp[i][0]=arr[i][0]+dp[i-1][0];
        }
        for(int i=1;i<n;i++){
            dp[0][i]=arr[0][i]+dp[0][i-1];
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=arr[i][j]+min(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m-1][n-1];
    }
};
