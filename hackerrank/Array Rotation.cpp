#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int m,b;
		cin>>m>>b;
		b=b%m;
		int arr[m];
		for(int i=0;i<m;i++){
			cin>>arr[i];
		}

		for(int k=0;k<m;k++){
			int ind = (k+(m-b))%m;
			cout<<arr[ind]<<" ";
		}
		cout<<endl;
		

	}
}
