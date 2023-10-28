#include <iostream>
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
	    int brr[a]={0};
	    for(int j=0;j<a;j++){
	        brr[arr[j]-1]++;
	    }
	    int max=0;
	    for(int j=0;j<a;j++){
	        if(brr[j]>max){
	            max=brr[j];
	        }
	    }
	    cout<<a-max<<endl;
	}
}
