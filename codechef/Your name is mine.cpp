Input
Output
3
john johanna
ira ira
kayla jayla
YES
YES
NO
Explanation:
Case 1: Consider S = "johanna". So, S[0] = 'j', S[1] = 'o', S[2] = 'h' and so on. If we remove the indices [3, 4, 6] or [3, 5, 6] from S, it becomes "john". Hence "john" is a subsequence of S, so the answer is "YES".

Case 2: Any string is a subsequence of it self, as it is formed after removing "0" characters. Hence the answer is "YES".

Case 3: "jayla" can not be attained from "kayla" as removing any character from "kayla" would make the string length smaller than "jayla", also there is no 'j' in "kayla". Similar reasoning can be applied to see why "kayla" can't be attained from "jayla". Hence the answer is "NO"

Answer:
#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(const string& a, const string& b) {
    int i = 0; 
    int j = 0;  

    while (i < a.length() && j < b.length()) {
        if (a[i] == b[j]) {
            i++;
        }
        j++;
    }

    return (i == a.length());
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string M, W;
        cin >> M >> W;
        
        if (isSubsequence(M, W) || isSubsequence(W, M)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
