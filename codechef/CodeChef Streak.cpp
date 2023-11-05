#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        int arr[m];
        int brr[m];
        for (int j = 0; j < m; j++) {
            cin >> arr[j];
        }
        for (int j = 0; j < m; j++) {
            cin >> brr[j];
        }
        int curra = 0, maxa = 0;
        int currb = 0, maxb = 0;
        for (int j = 0; j < m; j++) {
            if (arr[j] != 0) {
                curra++;
            } else {
                maxa = max(maxa, curra);
                curra = 0;
            }
        }
        for (int j = 0; j < m; j++) {
            if (brr[j] != 0) {
                currb++;
            } else {
                maxb = max(maxb, currb);
                currb = 0;
            }
        }
        maxa = max(maxa, curra); 
        maxb = max(maxb, currb);

        if (maxa > maxb) {
            cout << "Om" << endl;
        } else if (maxa < maxb) {
            cout << "Addy" << endl;
        } else {
            cout << "Draw" << endl;
        }
    }
}
