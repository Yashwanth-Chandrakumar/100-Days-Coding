#include <bits/stdc++.h> 
vector<int> maximumsumSubarray(vector<int> &arr , int n)
{
    int maxSum = INT_MIN, currentSum = 0;
    int start = 0, end = 0, currentStart = 0;
    
    for (int i = 0; i < n; ++i) {
        currentSum += arr[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = currentStart;
            end = i;
        }
        if (currentSum < 0) {
            currentSum = 0;
            currentStart = i + 1;
        }
    }

    vector<int> result;
    for (int i = start; i <= end; ++i) {
        result.push_back(arr[i]);
    }
    return result;
}
