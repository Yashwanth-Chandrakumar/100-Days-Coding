Answer:
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		int arr[m][m];
		for(int j=0;j<m;j++){
			for(int k=0;k<m;k++){
				cin>>arr[j][k];
			}
		}
		int count=0;

		for (int j = 0; j < m; j++) {
            for (int k = 0; k < m; k++) {
                for (int x = j; x < m; x++) {
                    for (int y = k; y < m; y++) {
                        if (arr[j][k] > arr[x][y]) {
                            count++;
                        }
                    }
                }
            }
        }
		cout<<count<<endl;
	}
}
