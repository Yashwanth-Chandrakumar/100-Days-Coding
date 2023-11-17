#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;
    
    while(t--) {
        int n, a, m=0;
        cin>> n;
        a = n;
        
        while(a>0) {
            if (a%10 == 9) m++;
            else break;
            a /= 10;
        }
        cout<< (m%2 == 0 ? n+1 : n+2) <<endl;
    }
    return 0;
}
