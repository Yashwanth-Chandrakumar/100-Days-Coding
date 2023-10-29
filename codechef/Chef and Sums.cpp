#include<bits/stdc++.h>
using namespace std;
int findMinIndex(int arr[], int n) {
  int prefix[n];
  prefix[0] = arr[0];
  for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i - 1] + arr[i];
  }

  int suffix[n];
  suffix[n - 1] = arr[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    suffix[i] = suffix[i + 1] + arr[i];
  }

  int min_value = INT_MAX;
  int min_index = -1;
  for (int i = 0; i < n; i++) {
    int curr_value = prefix[i] + suffix[i];
    if (curr_value < min_value) {
      min_value = curr_value;
      min_index = i;
    }
  }

  return min_index;
}



int main() {
 
  int t;
  cin >> t;

  
  while (t--) {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int min_index = findMinIndex(arr, n);
    cout <<min_index + 1 << endl;
  }

  return 0;
}
