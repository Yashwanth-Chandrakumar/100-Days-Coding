#include <bits/stdc++.h>
using namespace std;

int main() {
	int nt;
	cin>>nt;
	while(nt--){
	    int n,k;
      cin>>n>>k;
	    int arr[n],i;
	  for(i=0;i<n;i++) cin>>arr[i];
	  if(n==1) cout<<"YES"<<endl;
	  else{
	  sort(arr, arr + n, greater<int>());
	  if(arr[0]+arr[n-1]<=k) cout<<"YES"<<endl;
	  else cout<<"No"<<endl;
	  }
	}
	return 0;
}
