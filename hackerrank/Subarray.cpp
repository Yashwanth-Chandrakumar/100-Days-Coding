#include <bits/stdc++.h> 
using namespace std;

int minSubarraySum(int arr[], int n, int k) 
{
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        sum += arr[i];
    }

    int minSum = sum;

    for (int i = k; i < n; ++i) {
        sum += arr[i] - arr[i - k];
        minSum = min(minSum, sum);
    }

    return minSum;
}
