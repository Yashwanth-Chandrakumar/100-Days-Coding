Monk's best friend Micro, who happen to be an awesome programmer, got him an integer matrix M of size 
 for his birthday. Monk is taking coding classes from Micro. They have just completed array inversions and Monk was successful in writing a program to count the number of inversions in an array. Now, Micro has asked Monk to find out the number of inversion in the matrix M. Number of inversions, in a matrix is defined as the number of unordered pairs of cells 
 such that.
Monk is facing a little trouble with this task and since you did not got him any birthday gift, you need to help him with this task.

Input:
First line consists of a single integer T denoting the number of test cases.
First line of each test case consists of one integer denoting N. Following N lines consists of N space separated integers denoting the matrix M.

Output:
Print the answer to each test case in a new line.

Sample Input
2
3
1 2 3
4 5 6
7 8 9
2
4 3
1 4

Output:

0
2

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
