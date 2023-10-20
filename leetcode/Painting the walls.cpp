Example 1:

Input: cost = [1,2,3,2], time = [1,2,3,2]
Output: 3
Explanation: The walls at index 0 and 1 will be painted by the paid painter, and it will take 3 units of time; meanwhile, the free painter will paint the walls at index 2 and 3, free of cost in 2 units of time. Thus, the total cost is 1 + 2 = 3.
Example 2:

Input: cost = [2,3,4,2], time = [1,1,1,1]
Output: 4
Explanation: The walls at index 0 and 3 will be painted by the paid painter, and it will take 2 units of time; meanwhile, the free painter will paint the walls at index 1 and 2, free of cost in 2 units of time. Thus, the total cost is 2 + 2 = 4.

Answer:
class Solution {
public:
    int paintWalls(vector<int>& cost, vector<int>& time) {
         int n = cost.size();
        vector<int> dp(n + 1, 1e9);
        dp[0] = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = n; j > 0; --j) {
                dp[j] = std::min(dp[j], dp[std::max(j - time[i] - 1, 0)] + cost[i]);
            }
        }
        return dp[n]; 
    
    }
};
