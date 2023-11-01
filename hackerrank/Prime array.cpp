#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
  if (n < 2) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int countPrimeTriplets(vector<int>& arr) {
  int count = 0;
  for (int i = 0; i < arr.size() - 2; i++) {
    for (int j = i + 1; j < arr.size() - 1; j++) {
      for (int k = j + 1; k < arr.size(); k++) {
        if (isPrime(arr[i] * arr[j] * arr[k])) {
          count++;
        }
      }
    }
  }
  return count;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    cout << countPrimeTriplets(arr) << endl;
  }
  return 0;
}
