#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,z;
	    cin>>n;
	    string sr;
	    cin>>sr;
	    z = count(sr.begin(),sr.end(),'0');
	    cout<<((z<(n-z))?(z+1):(n-z))<<"\n";
	}
	return 0;
}
