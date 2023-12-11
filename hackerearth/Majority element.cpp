#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	unordered_map<int,int>ans;
	for(int i=0;i<n;i++){
		ans[arr[i]]++;
	}
	for(auto &x:ans){
		if(x.second>floor(n/2)){
			return x.first;
		}
	}
	return -1;
}
