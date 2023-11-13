#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int a;
	    cin>>a;
	    int arr[a];
	    for(int j=0;j<a;j++){
	        cin>>arr[j];
	    }
	    int k;
	    cin>>k;
	    int x = arr[k-1];
	    sort(arr,arr+a);
	    
	    for(int l=0;l<a;l++){
	        if(arr[l]==x){
	            cout<<l+1<<endl;
	            break;
	        }
	    }
	}
