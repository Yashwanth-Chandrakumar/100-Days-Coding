#include <iostream>
using namespace std;

int main() {
	int t,n;
	string s;
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>s;
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(s[i]==s[i+1])
	            i++;
	        
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
