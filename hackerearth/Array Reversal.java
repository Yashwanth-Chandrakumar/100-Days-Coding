#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	m=m+1;
	int n=arr.size()-1;
	while(m<=n){
		swap(arr[m],arr[n]);
		m++;
		n--;
	}
}
