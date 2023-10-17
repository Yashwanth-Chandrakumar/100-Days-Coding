First line contains an integer 
 denoting the size of array.

Next line contains 
 integers denoting the elements of the array.

 

Output Format:

Print 
 integers. 
 element should be the 
 of the array prefix till 

 

Constraints:


Sample Input
5
1 0 5 5 3
Sample Output
0 2 2 2 2

Answer:
#include <iostream> 
using namespace std; 
int n, a[200000]; 
void search(){     
	int i, j=-1;     
	for(i=0; i<=n && j<0;i++){         
		if(a[i]==0)             
		j=i;     
		}     
		cout<<j<<" "; 
	} 
int main() {     
	int k;     
	cin>>n;     
	for(int i =1 ; i<=n; i++){         
		cin>>k;         
		a[k]++;         
		search();     
	}
}
