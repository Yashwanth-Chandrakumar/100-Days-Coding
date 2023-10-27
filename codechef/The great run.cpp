#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        
        vector<int> girls(N);
        for (int i = 0; i < N; i++) {
            cin >> girls[i];
        }
        
        int maxImpressions = 0;
        for (int i = 0; i <= N - K; i++) {
            int segmentImpressions = 0;
            for (int j = i; j < i + K; j++) {
                segmentImpressions += girls[j];
            }
            maxImpressions = max(maxImpressions, segmentImpressions);
        }
        
        cout << maxImpressions << endl;
    }
    
    return 0;
}
