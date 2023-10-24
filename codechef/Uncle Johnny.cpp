Input
Output
3
4
1 3 4 2
2
5
1 2 3 9 4
5
5
1 2 3 9 4 
1
3
4
1
Explanation:
In the example test there are T=3 test cases.

Test case 1

In the first test case N equals to 4, K equals to 2, A equals to {1, 3, 4, 2}. The answer is 3, because {1, 3, 4, 2} -> {1, 2, 3, 4}. A2 now is on the 3-rd position.

Test case 2

In the second test case N equals to 5, K equals to 5, A equals to {1, 2, 3, 9, 4}. The answer is 4, because {1, 2, 3, 9, 4} -> {1, 2, 3, 4, 9}. A5 now is on the 4-th position.

Test case 3

In the third test case N equals to 5, K equals to 1, A equals to {1, 2, 3, 9, 4}. The answer is 1, because {1, 2, 3, 9, 4} -> {1, 2, 3, 4, 9}. A1 stays on the 1-th position.

Answer:
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
}
