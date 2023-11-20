#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    string a;
	    cin>>a;
	    int cnt=0;
	    for(int i=0;i<a.length();i++){
	        if(a[i]=='A' || a[i]=='D' || a[i]=='O' || a[i]=='P'|| a[i]=='Q' || a[i]=='R'){
	            cnt++;
	        }
	        if(a[i]=='B'){
	            cnt+=2;
	        }
	    }
	    cout<<cnt<<endl;
	}
}
