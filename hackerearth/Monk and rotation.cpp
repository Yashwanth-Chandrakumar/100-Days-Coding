Monk loves to preform different operations on arrays, and so being the principal of Hackerearth School, he assigned a task to his new student Mishki. Mishki will be provided with an integer array A of size N and an integer K , where she needs to rotate the array in the right direction by K steps and then print the resultant array. As she is new to the school, please help her to complete the task.

Video approach to solve this question: here

Input:
The first line will consists of one integer T denoting the number of test cases.
For each test case:
1) The first line consists of two integers N and K, N being the number of elements in the array and K denotes the number of steps of rotation.
2) The next line consists of N space separated integers , denoting the elements of the array A.

Output:
Print the required array.

Constraints:




Sample Input
1
5 2
1 2 3 4 5
Sample Output
4 5 1 2 3

Answer:
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
