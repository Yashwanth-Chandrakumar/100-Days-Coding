#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n,flag=0;
	    string s;
	    cin >> n >> s;
	    sort(s.begin(),s.end());
	    for(int i=1;i<size(s);i++) {
	        if(s[i]==s[i-1]) flag=1;
	    }
	    if(flag==1) cout << n-2 << endl;
	    else cout << -1 << endl;
 	}
	return 0;
}
