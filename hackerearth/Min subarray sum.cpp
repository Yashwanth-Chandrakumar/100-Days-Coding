#include <bits/stdc++.h> 
int minSubarraySum(int arr[], int n, int k) 
{
  
    int minSum = INT_MAX;

    for (int i = 0; i <= n - k; ++i) {
        int sum = 0;

        for (int j = i; j < i + k; ++j) {
            sum += arr[j];
        }

        minSum = min(minSum, sum);
    }

    return minSum;
}
