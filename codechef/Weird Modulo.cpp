#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int m;
	    cin>>m;
	    int arr[m];
	    for(int i=0;i<m;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+m);
	    int d=arr[0];
	    for(int i=1;i<m;i++){
	        d%=arr[i];
	    }
	    cout<<d<<endl;
	}
}
