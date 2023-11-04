#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        map<int, int> max_scores;
        
        for (int i = 0; i < N; i++) {
            int p, s;
            cin >> p >> s;
            max_scores[p] = max(max_scores[p], s);
        }
        
        int total_score = 0;
        for (int i = 1; i <= 8; i++) {
            total_score += max_scores[i];
        }
        
        cout << total_score << endl;
    }
    
    return 0;
}
