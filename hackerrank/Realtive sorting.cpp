#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;

vector<int> relativeSorting(vector<int> &arr, vector<int> &brr, int n, int m) {
    unordered_map<int, int> indexMap;  // Map to store indices of elements in brr
    
    for (int i = 0; i < m; ++i) {
        indexMap[brr[i]] = i;
    }

    sort(arr.begin(), arr.end(), [&indexMap](int a, int b) {
        int index_a = indexMap.find(a) != indexMap.end() ? indexMap[a] : INT_MAX;
        int index_b = indexMap.find(b) != indexMap.end() ? indexMap[b] : INT_MAX;
        return index_a < index_b;
    });

    auto partition_it = stable_partition(arr.begin(), arr.end(), [&indexMap](int a) {
        return indexMap.find(a) != indexMap.end();
    });

    sort(partition_it, arr.end());

    return arr;
}
