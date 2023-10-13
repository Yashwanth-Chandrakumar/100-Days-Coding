“You won’t get caught if you hide behind someone.”

Sang-Woo advises Gi-Hun to hide behind someone to avoid getting shot.

Gi-Hun follows Sang-Woo's advice and hides behind Ali, who saved his life earlier. Gi-Hun and Ali both have the same height, 
K. Many players saw this trick and also started hiding behind Ali.

Now, there are N players standing between Gi-Hun and Ali in a straight line, 
with the ith player having height Hi . Gi-Hun wants to know the minimum number of players 
who need to get shot so that Ali is visible in his line of sight.
Sample 1:
Input
Output
3
4 10
2 13 4 16
5 8
9 3 8 8 4
4 6
1 2 3 4
2
1
0
Explanation:
Test Case 1: Gi-Hun and Ali have height 
10
10. For Ali to be visible to Gi-Hun, the second person (with height 
13
13) and the fourth person (with height 
16
16) need to get shot. Hence, the minimum number of players who need to get shot is 
2
2.

Test Case 2: Gi-Hun and Ali have height 
8
8. For Ali to be visible to Gi-Hun, the first person (with height 
9
9) needs to get shot. Hence, the minimum number of players who need to get shot is 
1
1.

Test Case 3: Nobody needs to get shot because everyone is shorter than Gi-Hun and Ali.


Answers:

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int a,b;
	    cin>>a>>b;
	    int arr[a];
	    for(int j=0;j<a;j++){
	        cin>>arr[j];
	    }
	    int count=0;
	    for(int j=0;j<a;j++){
	        if(arr[j]>b){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
