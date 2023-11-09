#include <iostream>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int X, H;
    cin >> X >> H;

    int turns = 0;

    for (int i = 0; i < 5; i++) {
      H -= X / 2;
      turns++;

      if (H <= 0) {
        break;
      }
    }

     while (H > 0) {
      H -= X;
      turns++;
    }

    cout << turns << endl;
  }

  return 0;
}
