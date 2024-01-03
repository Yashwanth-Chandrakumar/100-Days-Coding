
int maxProfit(vector<int>& prices) {
    int n = prices.size();
    if (n < 2) {
        return 0;
    }

    int maxProfit = 0;
    int minPrice = prices[0];

    for (int i = 1; i < n; ++i) {
        minPrice = min(minPrice, prices[i]);

        int potentialProfit = prices[i] - minPrice;

        maxProfit = max(maxProfit, potentialProfit);
    }

    return maxProfit;
}
