#include<iostream>
using namespace std;

void reverseArray(vector<int>& arr, int start, int end) {
  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}
vector<int> rotateArray(vector<int> arr, int k) {
  int n = arr.size();
  k %= n; // Ensure k is within bounds
  reverseArray(arr, 0, k - 1);
  reverseArray(arr, k, n - 1);
  reverseArray(arr, 0, n - 1);
  return arr;
}

