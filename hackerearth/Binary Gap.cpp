#include <bits/stdc++.h> 
int binaryGap(int n) {
    bitset<32> binaryRepresentation(n);
    vector<int> positions;

    for (int i = 0; i < 32; ++i) {
        if (binaryRepresentation[i] == 1) {
            positions.push_back(i + 1); 
        }
    }

    int maxDist = 0;
    for (int i = 1; i < positions.size(); ++i) {
        maxDist = max(maxDist, positions[i] - positions[i - 1]);
    }

    return maxDist;
}
