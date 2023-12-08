#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    ll n,x;
	    cin>>n>>x;
	    string ans="YES";
	    
	    if(x%2==0 && (n%2)!=0)
	        ans="NO";
	        
	   cout<<ans<<endl;
	}
	return 0;
}
