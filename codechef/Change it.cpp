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
	    unordered_map<int,int>ans;
	    for(int i=0;i<m;i++){
	        ans[arr[i]]++;
	    }
	    int max=0;
	    for(auto x:ans){
	        if(x.second>max){
	            max=x.second;
	        }
	    }
	    cout<<m-max<<endl;
	}
}
