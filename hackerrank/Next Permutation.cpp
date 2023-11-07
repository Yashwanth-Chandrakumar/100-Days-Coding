#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
  int i = n - 1;
  while (i > 0 && permutation[i - 1] >= permutation[i]) {
      i--;
  }
  if (i <= 0) {
      reverse(permutation.begin(), permutation.end());
  } else {
      int j = n - 1;
      while (permutation[j] <= permutation[i - 1]) {
          j--;
      }
      swap(permutation[i - 1], permutation[j]);
      reverse(permutation.begin() + i, permutation.end());
  }
  return permutation;

      }
  
