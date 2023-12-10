#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,M,ans;
	    cin>>N>>M;
	    
	    ans=__gcd(N,M);
	    
	    cout<<ans<<endl;
	}
	return 0;
}
